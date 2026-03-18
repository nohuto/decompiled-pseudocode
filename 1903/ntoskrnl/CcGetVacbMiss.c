/*
 * XREFs of CcGetVacbMiss @ 0x140076C40
 * Callers:
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140076FA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcIncrementVacbActiveCount @ 0x140076FE8 (CcIncrementVacbActiveCount.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077028 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetVacbFromFreeList @ 0x14007705C (CcGetVacbFromFreeList.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     SetVacb @ 0x14007A558 (SetVacb.c)
 *     CcSetVacbInFreeList @ 0x14007A65C (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x14007D0F0 (CcGetVacbLargeOffset.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x14027E468 (CcUnmapInactiveViews.c)
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 */

__int64 *__fastcall CcGetVacbMiss(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // esi
  char v5; // r12
  int v6; // r15d
  __int64 v9; // rbx
  __int64 Partition; // r14
  KIRQL v11; // al
  __int64 v12; // rdx
  int v13; // ecx
  KIRQL v14; // di
  __int64 *VacbFromFreeList; // rsi
  __int64 v16; // rdx
  NTSTATUS v17; // r14d
  __int64 VacbLargeOffset; // r15
  unsigned int v19; // edi
  KIRQL v21; // al
  __int64 v22; // r8
  KIRQL v23; // di
  KIRQL v24; // al
  __int64 v25; // rdx
  KIRQL v26; // di
  KIRQL v27; // al
  __int64 v28; // r8
  KIRQL v29; // di
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned int v33; // [rsp+98h] [rbp+10h]

  HIDWORD(v30) = HIDWORD(a2);
  v4 = 0;
  v5 = 0;
  LODWORD(v30) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  v9 = v30;
  Partition = CcGetPartition(a1);
  v32 = Partition;
  while ( 1 )
  {
    v11 = KeAcquireQueuedSpinLock(4uLL);
    LOBYTE(v12) = v5;
    v13 = v4 | 2;
    v14 = v11;
    if ( !v5 )
      v13 = v4;
    v33 = v13;
    VacbFromFreeList = (__int64 *)CcGetVacbFromFreeList(Partition, v12);
    KeReleaseQueuedSpinLock(4uLL, v14);
    if ( VacbFromFreeList )
      break;
    do
    {
      if ( !(unsigned int)CcUnmapInactiveViews(*(_QWORD *)(Partition + 8), v16, 0LL, 0LL) )
        break;
      v24 = KeAcquireQueuedSpinLock(4uLL);
      LOBYTE(v25) = v5;
      v26 = v24;
      VacbFromFreeList = (__int64 *)CcGetVacbFromFreeList(Partition, v25);
      KeReleaseQueuedSpinLock(4uLL, v26);
    }
    while ( !VacbFromFreeList );
    if ( VacbFromFreeList )
      break;
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v17 = -1073741670;
LABEL_36:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v17);
    Partition = v32;
    v5 = 1;
    v4 = v33;
  }
  v31 = a1[4] - v9;
  if ( v31 > 0x40000 )
    LODWORD(v31) = 0x40000;
  v17 = MmMapViewInSystemCache(a1[21], VacbFromFreeList, &v30, &v31);
  CcAcquireBcbLockAndVacbLock(a3, a1);
  v9 = v30;
  if ( (__int64)a1[4] > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v30);
  else
    VacbLargeOffset = *(_QWORD *)(a1[11] + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
  if ( VacbLargeOffset )
  {
    v19 = v33;
  }
  else
  {
    if ( v17 < 0 )
      goto LABEL_30;
    v19 = v33;
    if ( !(unsigned __int8)SetVacb(a1, v9, VacbFromFreeList, 0LL) )
    {
      v17 = -1073741670;
      CcUnmapVacb(VacbFromFreeList, a1, v33);
    }
  }
  if ( v17 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(a3, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v19);
      v21 = KeAcquireQueuedSpinLock(4uLL);
      LOBYTE(v22) = v5;
      v23 = v21;
      CcSetVacbInFreeList(v32, VacbFromFreeList, v22);
      KeReleaseQueuedSpinLock(4uLL, v23);
      VacbFromFreeList = (__int64 *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1 )
        KeBugCheckEx(0x34u, 0x770uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = (__int64)a1;
      VacbFromFreeList[2] = v9;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v9 >= a1[46] )
        a1[46] = v9 + 0x40000;
      CcReleaseBcbLockAndVacbLock(a3, a1);
    }
    goto LABEL_19;
  }
LABEL_30:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v27 = KeAcquireQueuedSpinLock(4uLL);
  LOBYTE(v28) = v5;
  v29 = v27;
  CcSetVacbInFreeList(v32, VacbFromFreeList, v28);
  KeReleaseQueuedSpinLock(4uLL, v29);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v17) )
    v17 = -1073741589;
LABEL_19:
  if ( v17 < 0 )
  {
    v6 = a4;
    goto LABEL_36;
  }
  return VacbFromFreeList;
}
