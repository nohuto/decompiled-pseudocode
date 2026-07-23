/*
 * XREFs of CcGetVacbMiss @ 0x1400216E0
 * Callers:
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     CcIncrementVacbActiveCount @ 0x14002198C (CcIncrementVacbActiveCount.c)
 *     CcGetVacbFromFreeList @ 0x1400219C0 (CcGetVacbFromFreeList.c)
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 *     CcGetVacbLargeOffset @ 0x140022BD4 (CcGetVacbLargeOffset.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CcSetVacbInFreeList @ 0x140079BC0 (CcSetVacbInFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // bp
  int v6; // r15d
  __int64 Partition; // r14
  unsigned __int8 CurrentIrql; // bl
  _QWORD *VacbFromFreeList; // rdi
  __int64 v12; // rdx
  NTSTATUS v13; // ebp
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 VacbLargeOffset; // r15
  unsigned __int8 v17; // r14
  KIRQL v19; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v21; // bl
  KIRQL v22; // bl
  unsigned int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v27; // [rsp+98h] [rbp+10h]

  HIDWORD(v24) = HIDWORD(a2);
  v4 = 0;
  v23 = 0;
  v5 = 0;
  LODWORD(v24) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  v27 = 0;
  Partition = CcGetPartition(a1);
  v25 = Partition;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( v5 )
      v23 = v4 | 2;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(Partition + 8), v12, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_7;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v17 = v27;
    v13 = -1073741670;
LABEL_51:
    if ( v17 || v6 != 1 )
      RtlRaiseStatus(v13);
    Partition = v25;
    v5 = 1;
    v4 = v23;
    v27 = 1;
  }
LABEL_7:
  v26[0] = *(_QWORD *)(a1 + 32) - v24;
  if ( v26[0] > 0x40000 )
    LODWORD(v26[0]) = 0x40000;
  v13 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, &v24, v26);
  if ( a3 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v14 = *(_QWORD *)(a1 + 32);
  v15 = v24;
  if ( v14 > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v24);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v24 >> 18));
  if ( !VacbLargeOffset )
  {
    if ( v13 < 0 )
      goto LABEL_45;
    if ( v14 > 0x2000000 )
    {
      if ( !(unsigned __int8)CcSetVacbLargeOffset(a1, v15, VacbFromFreeList, 0LL) )
      {
        v13 = -1073741670;
        CcUnmapVacb(VacbFromFreeList, a1, v23);
        goto LABEL_45;
      }
    }
    else if ( (unsigned __int64)VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v24 >> 18)) = VacbFromFreeList;
    }
  }
  if ( v13 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(a3, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v23);
      v17 = v27;
      v19 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v25, VacbFromFreeList, v27);
      KeReleaseQueuedSpinLock(4uLL, v19);
      VacbFromFreeList = (_QWORD *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1LL )
        KeBugCheckEx(0x34u, 0x755uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v15;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v15 >= *(_QWORD *)(a1 + 368) )
        *(_QWORD *)(a1 + 368) = v15 + 0x40000;
      ExReleasePushLockEx(a1 + 104, 0LL);
      if ( a3 )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      v17 = v27;
    }
    goto LABEL_26;
  }
LABEL_45:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  v17 = v27;
  if ( v27 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v22 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(v25, VacbFromFreeList, v27);
  KeReleaseQueuedSpinLock(4uLL, v22);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v13) )
  {
    v13 = -1073741589;
    goto LABEL_50;
  }
LABEL_26:
  if ( v13 < 0 )
  {
LABEL_50:
    v6 = a4;
    goto LABEL_51;
  }
  return VacbFromFreeList;
}
