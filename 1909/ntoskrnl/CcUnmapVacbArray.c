/*
 * XREFs of CcUnmapVacbArray @ 0x14007A300
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x14007B0B0 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcUnmapAndPurge @ 0x14008027C (CcUnmapAndPurge.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140077218 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077298 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcSetVacbInFreeList @ 0x14007AA1C (CcSetVacbInFreeList.c)
 *     CcSetVacbLargeOffset @ 0x14007B0E4 (CcSetVacbLargeOffset.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140609340 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  int v7; // r12d
  unsigned int v8; // r13d
  char v12; // r14
  __int64 v13; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // rdi
  char v16; // dl
  char v17; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r11
  int v21; // r8d
  int v22; // ecx
  int v23; // r10d
  __int64 i; // rsi
  __int64 v25; // rdx
  KIRQL v27; // al
  KIRQL v28; // r14
  __int64 v29; // r8
  void *v30; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 Partition; // [rsp+38h] [rbp-30h]

  v6 = a3;
  v33 = 0LL;
  v7 = 0;
  v8 = 0;
  v12 = 1;
  Partition = CcGetPartition(a1);
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v13 = *a2;
    v14 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v33 = v14;
    if ( (_DWORD)v6 )
      v15 = v13 + v6;
    else
      v15 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 32);
    v14 = v33;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v7 = 1;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  }
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  if ( a4 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 336) = v15;
  }
  if ( v14 < v15 )
  {
    v16 = a5;
    v17 = 1;
    while ( 1 )
    {
      v18 = *(_QWORD *)(a1 + 32);
      if ( v14 >= v18 )
        goto LABEL_20;
      v19 = *(_QWORD *)(a1 + 88);
      if ( v18 <= 0x2000000 )
      {
        i = *(_QWORD *)(v19 + 8 * ((unsigned __int64)(unsigned int)v33 >> 18));
      }
      else
      {
        v20 = v14;
        v21 = 0;
        v22 = 25;
        do
        {
          v23 = v22;
          v22 += 7;
          ++v21;
        }
        while ( v18 > 1LL << v22 );
        for ( i = *(_QWORD *)(v19 + 8 * (v14 >> v23)); i; i = *(_QWORD *)(i + 8 * (v20 >> v23)) )
        {
          if ( !v21 )
            break;
          v25 = 1LL << v23;
          v23 -= 7;
          v20 &= v25 - 1;
          --v21;
        }
        v16 = a5;
      }
      if ( !i )
        goto LABEL_20;
      if ( !*(_WORD *)(i + 16) )
        break;
      if ( a6 )
      {
        v14 += 0x40000LL;
        v33 = v14;
        if ( v16 )
          KeBugCheckEx(0x34u, 0xC31uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        goto LABEL_22;
      }
      if ( !v16 )
      {
        v12 = 0;
        goto LABEL_24;
      }
      v30 = *(void **)(a1 + 184);
      if ( !v30 )
      {
        v17 = 0;
        *(_WORD *)(a1 + 344) = 0;
        *(_BYTE *)(a1 + 346) = 6;
        *(_DWORD *)(a1 + 348) = 0;
        *(_QWORD *)(a1 + 360) = a1 + 352;
        *(_QWORD *)(a1 + 352) = a1 + 352;
        _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
        goto LABEL_22;
      }
      if ( v17 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 184));
        _InterlockedOr(v32, 0);
        v17 = 0;
      }
      else
      {
        CcReleaseBcbLockAndVacbLock(v7, (struct _FAST_MUTEX *)a1);
        KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
        v17 = 1;
        CcAcquireBcbLockAndVacbLock(v7, (struct _FAST_MUTEX *)a1);
      }
LABEL_21:
      v16 = a5;
LABEL_22:
      if ( v14 >= v15 )
      {
        v12 = 1;
        goto LABEL_24;
      }
    }
    if ( v18 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v14, 0LL, 0LL);
    else
      *(_QWORD *)(v19 + 8 * ((unsigned __int64)(unsigned int)v33 >> 18)) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
    if ( *(_DWORD *)(Partition + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v8 |= 2u;
    else
      v8 &= ~2u;
    CcUnmapVacb(i, a1, v8);
    v27 = KeAcquireQueuedSpinLock(4uLL);
    *(_QWORD *)(i + 8) = 0LL;
    v28 = v27;
    LOBYTE(v29) = (v8 & 2) != 0;
    CcSetVacbInFreeList(Partition, i, v29);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v28);
    v17 = 1;
LABEL_20:
    v14 += 0x40000LL;
    v33 = v14;
    goto LABEL_21;
  }
LABEL_24:
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v7 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v12;
}
