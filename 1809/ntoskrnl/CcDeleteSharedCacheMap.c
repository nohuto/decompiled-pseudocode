/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14007C260
 * Callers:
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     CcUninitializeVolumeCacheMap @ 0x14007C9B8 (CcUninitializeVolumeCacheMap.c)
 *     CcUnmapAndPurge @ 0x14007CA84 (CcUnmapAndPurge.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     CcDeleteBcbs @ 0x14016059C (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(char *P, __int64 a2, __int64 a3, int a4, PFILE_OBJECT FileObject)
{
  __int64 Partition; // r14
  char **v10; // rdx
  PVOID *v11; // rcx
  __int64 v12; // rdx
  char **v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // si
  void *v17; // rcx
  __int64 v18; // rbx
  volatile signed __int64 *v19; // rsi
  unsigned int v20; // ebx
  signed __int64 BugCheckParameter4; // rcx
  __int64 v22; // rcx
  char *v23; // rcx
  char *v24; // rcx
  char *v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v29; // rcx

  Partition = CcGetPartition(P);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
    __fastfail(0xEu);
  v10 = (char **)*((_QWORD *)P + 17);
  v11 = (PVOID *)*((_QWORD *)P + 18);
  if ( v10[1] != P + 136 || *v11 != P + 136 )
    goto LABEL_53;
  *v11 = v10;
  v10[1] = (char *)v11;
  if ( (*((_DWORD *)P + 38) & 0x3000000) != 0 )
  {
    v12 = *((_QWORD *)P + 15);
    v13 = (char **)*((_QWORD *)P + 16);
    if ( *(char **)(v12 + 8) == P + 120 && *v13 == P + 120 )
    {
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      goto LABEL_8;
    }
LABEL_53:
    __fastfail(3u);
  }
LABEL_8:
  *(_QWORD *)(*(_QWORD *)((*((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)P + 38) |= 0x80020u;
  if ( !a2 && !*(_BYTE *)(Partition + 902) )
    KeBugCheckEx(0x34u, 0xDA5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KxReleaseQueuedSpinLock(a3);
  v15 = *(_BYTE *)(a3 + 16);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v15);
  if ( a2 )
  {
    KxReleaseQueuedSpinLock(a2);
    v16 = *(_BYTE *)(a2 + 16);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29);
    }
    __writecr8(v16);
  }
  if ( *((char **)P + 2) != P + 16 )
    CcDeleteBcbs(P);
  LOBYTE(v14) = *((_QWORD *)P + 1) >= 0x100000LL;
  CcUnmapAndPurge(P, v14);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    CcDereferenceSharedCacheMapFileObject((__int64)P, (unsigned __int64)FileObject);
  }
  v17 = (void *)*((_QWORD *)P + 21);
  if ( v17 )
  {
    ObfDereferenceObject(v17);
    *((_QWORD *)P + 21) = 0LL;
  }
  if ( *((_QWORD *)P + 20) )
    CcDeleteMbcb(P);
  CcUninitializeVolumeCacheMap(*((PVOID *)P + 63));
  v18 = _InterlockedExchange64((volatile __int64 *)P + 12, 0LL);
  v19 = (volatile signed __int64 *)(v18 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v20 = v18 & 0xF;
    if ( v20 )
    {
      ObpTraceObjectDereferenceIfActive((_DWORD)v19 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64(v19 - 6, -v20) - v20;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v19 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v19 - 48) >> 8)],
            (ULONG_PTR)v19,
            6uLL,
            *((_QWORD *)v19 - 5));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v19, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v19 - 6);
      }
    }
  }
  ObfDereferenceObject((PVOID)v19);
  v22 = *((_QWORD *)P + 34);
  if ( v22 )
  {
    do
    {
      v26 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      v27 = *(_QWORD *)v26;
      KeSetEvent((PRKEVENT)(v26 + 8), 0, 0);
      v22 = v27;
    }
    while ( v27 );
  }
  v23 = (char *)*((_QWORD *)P + 11);
  if ( v23 != P + 56 && v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (char *)*((_QWORD *)P + 22);
  if ( v24 && v24 != P + 344 )
    ExFreePoolWithTag(v24, 0);
  v25 = (char *)*((_QWORD *)P + 23);
  if ( v25 && v25 != P + 344 )
    ExFreePoolWithTag(v25, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
