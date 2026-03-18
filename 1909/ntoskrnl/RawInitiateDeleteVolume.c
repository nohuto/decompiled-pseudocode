/*
 * XREFs of RawInitiateDeleteVolume @ 0x1400D4F78
 * Callers:
 *     RawCompletionRoutine @ 0x1400F2690 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x14030A500 (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x14066B30C (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x14066E7D4 (RawCreate.c)
 *     RawClose @ 0x14066E964 (RawClose.c)
 *     RawCleanup @ 0x1406B6E6C (RawCleanup.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RawCleanupVcb @ 0x140671D28 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x1406A0AB4 (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  KIRQL v7; // r14
  void **FileContextSupportPointer; // rcx
  char *p_FilterContexts; // rbx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *v12; // rax
  void **v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v16; // rax
  KIRQL v17; // al
  int v18; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v20; // rcx

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) == 0 )
  {
    v7 = KeAcquireQueuedSpinLock(9uLL);
    if ( !a2 && *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) != a3 )
    {
      KeReleaseQueuedSpinLock(9uLL, v7);
      return v3;
    }
    FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7) )
    {
      memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[1].Oplock = 10;
      *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
      *((_QWORD *)AdvancedHeader[1].Oplock + 2) = *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2);
      *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
      *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)AdvancedHeader[1].FileContextSupportPointer + 2) & 8;
      *(_QWORD *)(*((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2) + 56LL) = AdvancedHeader[1].Oplock;
      v13 = AdvancedHeader[1].FileContextSupportPointer;
      AdvancedHeader[1].Oplock = 0LL;
      *((_WORD *)v13 + 2) |= 4u;
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&RawGlobalLock);
      v14 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        Blink = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)Blink->Flink == p_FilterContexts )
        {
          Blink->Flink = v14;
          v14->Blink = Blink;
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
          v16 = (struct _LIST_ENTRY *)qword_140436808;
          if ( *(__int64 **)qword_140436808 == &RawDismountedQueue )
          {
            *(_QWORD *)p_FilterContexts = &RawDismountedQueue;
            AdvancedHeader[1].FilterContexts.Blink = v16;
            v16->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
            qword_140436808 = (__int64)&AdvancedHeader[1].FilterContexts;
            KeReleaseGuardedMutex(&RawGlobalLock);
            return v3;
          }
        }
      }
    }
    else
    {
      *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
      *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&RawGlobalLock);
      v11 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v12 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v12->Flink == p_FilterContexts )
        {
          v12->Flink = v11;
          v11->Blink = v12;
          KeReleaseGuardedMutex(&RawGlobalLock);
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_10:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
          RawCleanupVcb(AdvancedHeader);
          RawDeleteVcb(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_20;
  }
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    v17 = KeAcquireQueuedSpinLock(9uLL);
    v18 = *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7);
    KeReleaseQueuedSpinLock(9uLL, v17);
    if ( !v18 )
    {
      ExAcquireFastMutex(&RawGlobalLock);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
      {
        v20 = AdvancedHeader[1].FilterContexts.Blink;
        if ( v20->Flink == &AdvancedHeader[1].FilterContexts )
        {
          v20->Flink = Flink;
          Flink->Blink = v20;
          KeReleaseGuardedMutex(&RawGlobalLock);
          goto LABEL_10;
        }
      }
LABEL_20:
      __fastfail(3u);
    }
  }
  return v3;
}
