/*
 * XREFs of CcUnmapVacbArray @ 0x1400798D0
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcUnmapAndPurge @ 0x14007CA84 (CcUnmapAndPurge.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x140127990 (CcUnmapFileOffsetFromSystemCache.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     CcSetVacbInFreeList @ 0x140079BC0 (CcSetVacbInFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CFE4 (CcAcquireBcbLockAndVacbLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r15d
  char v11; // r14
  __int64 Partition; // r12
  signed __int64 v13; // rdi
  signed __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi
  char v18; // bl
  __int64 v20; // r11
  int v21; // r8d
  int v22; // ecx
  int v23; // r10d
  __int64 v24; // rdx
  unsigned __int8 CurrentIrql; // r14
  __int64 v26; // r8
  __int64 v27; // rax
  void *v28; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+30h] [rbp-38h]
  signed __int64 v32; // [rsp+38h] [rbp-30h]

  v6 = a3;
  v32 = 0LL;
  v7 = 0;
  v31 = 0;
  v11 = 1;
  Partition = CcGetPartition(a1);
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v27 = *a2;
    v14 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v32 = v14;
    if ( (_DWORD)v6 )
      v13 = v27 + v6;
    else
      v13 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 32);
    v14 = v32;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v31 = 1;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  }
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  if ( a4 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 336) = v13;
  }
  if ( v14 >= v13 )
  {
LABEL_15:
    v18 = 1;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( v14 < v15 )
    {
      v16 = *(_QWORD *)(a1 + 88);
      if ( v15 > 0x2000000 )
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
        while ( v15 > 1LL << v22 );
        v17 = *(_QWORD *)(v16 + 8 * (v14 >> v23));
        if ( !v17 )
          goto LABEL_13;
        do
        {
          if ( !v21 )
            break;
          v24 = 1LL << v23;
          v23 -= 7;
          v20 &= v24 - 1;
          --v21;
          v17 = *(_QWORD *)(v17 + 8 * (v20 >> v23));
        }
        while ( v17 );
      }
      else
      {
        v17 = *(_QWORD *)(v16 + 8 * ((unsigned __int64)(unsigned int)v32 >> 18));
      }
      if ( v17 )
        break;
    }
LABEL_13:
    v14 += 0x40000LL;
    v32 = v14;
LABEL_14:
    if ( v14 >= v13 )
      goto LABEL_15;
  }
  if ( !*(_WORD *)(v17 + 16) )
  {
    if ( v15 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v14, 0LL, 0LL);
    else
      *(_QWORD *)(v16 + 8 * ((unsigned __int64)(unsigned int)v32 >> 18)) = 0LL;
    if ( *(_DWORD *)(Partition + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v7 |= 2u;
    else
      v7 &= ~2u;
    CcUnmapVacb(v17, a1, v7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    *(_QWORD *)(v17 + 8) = 0LL;
    LOBYTE(v26) = (v7 & 2) != 0;
    CcSetVacbInFreeList(Partition, v17, v26);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v11 = 1;
    goto LABEL_13;
  }
  if ( a6 )
  {
    v14 += 0x40000LL;
    v32 = v14;
    if ( a5 )
      KeBugCheckEx(0x34u, 0xC16uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( a5 )
  {
    v28 = *(void **)(a1 + 184);
    if ( v28 )
    {
      if ( v11 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 184));
        _InterlockedOr(v30, 0);
        v11 = 0;
      }
      else
      {
        CcReleaseBcbLockAndVacbLock(v31, a1);
        KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
        v11 = 1;
        CcAcquireBcbLockAndVacbLock(v31, a1);
      }
    }
    else
    {
      v11 = 0;
      *(_WORD *)(a1 + 344) = 0;
      *(_BYTE *)(a1 + 346) = 6;
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 360) = a1 + 352;
      *(_QWORD *)(a1 + 352) = a1 + 352;
      _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
    }
    goto LABEL_14;
  }
  v18 = 0;
LABEL_16:
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v31 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v18;
}
