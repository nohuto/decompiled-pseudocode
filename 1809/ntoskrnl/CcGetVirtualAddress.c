/*
 * XREFs of CcGetVirtualAddress @ 0x1400AFB80
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyFromCache @ 0x140639780 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x140639A30 (CcMapData.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 *     CcMapDataCommon @ 0x1406A1224 (CcMapDataCommon.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x14016AD64 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14016B0E4 (CcAllocateInitializeVacbArray.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x14026A6F0 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *a4,
        int a5,
        int a6)
{
  __int64 v6; // r15
  __int64 v7; // r8
  unsigned int v8; // r13d
  __int64 v10; // rbx
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v16; // rdx
  ULONG_PTR *v17; // rbx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  unsigned int v21; // r12d
  int v22; // esi
  __int64 v23; // r8
  __int64 v24; // r10
  volatile signed __int32 *VacbMiss; // rsi
  __int64 v27; // r11
  int v28; // edx
  int v29; // ecx
  int v30; // r9d
  __int64 v31; // rax
  __int64 InitializeVacbArray; // rax
  __int64 v33; // r12
  KIRQL v34; // si
  _DWORD *v35; // rcx
  unsigned int v36; // r8d
  __int64 *v37; // rdx
  int v38; // eax
  int v39; // eax
  bool v40; // zf
  unsigned __int32 v41; // eax
  int v42; // eax
  struct _KPRCB *v43; // rcx
  int v44; // [rsp+30h] [rbp-68h]
  int v45; // [rsp+34h] [rbp-64h]
  __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h] BYREF
  __int64 v48; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v50; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v51; // [rsp+A8h] [rbp+10h]
  volatile signed __int32 **v52; // [rsp+B0h] [rbp+18h]
  _DWORD *v53; // [rsp+B8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v7 = 0LL;
  v45 = 0;
  v8 = a2 & 0x3FFFF;
  v10 = a2 - (a2 & 0x3FFFF);
  v46 = v10;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v12 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = SchedulerAssist[5];
          SchedulerAssist[5] = v38 + 1;
          if ( v38 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v7 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
      {
        v35 = CurrentPrcb->SchedulerAssist;
        if ( v35 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v39 = v35[5] - 1;
            v35[5] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v50 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, CurrentIrql);
        v7 = 0LL;
      }
      v16 = (unsigned int)dword_140439C80;
      if ( (dword_140439C80 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v16 & 0x40000000) == 0 )
          {
            v41 = _InterlockedCompareExchange(&dword_140439C80, v16 | 0x40000000, v16);
            v40 = (_DWORD)v16 == v41;
            v16 = v41;
            if ( !v40 )
              continue;
          }
          KeYieldProcessorEx(&v50, v16, v7);
          v16 = (unsigned int)dword_140439C80;
        }
        while ( (v16 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v12 )
      v17 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v12 + 60LL) & 0x3FF));
    else
      v17 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    else
      dword_140439C80 = 0;
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v42 = v19[5] - 1;
        v19[5] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v17[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v10 = v46;
  }
  v20 = *(_DWORD *)(a1 + 152) & 0x200;
  v21 = v20 != 0;
  v51 = v21;
  if ( v20 || a5 )
  {
    v22 = 1;
    v44 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 || *(_DWORD *)(v6 + 856) >= 0x80u )
      goto LABEL_17;
  }
  else
  {
    v22 = 0;
    v44 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_17;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v33 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v22 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v34 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v33);
    KeReleaseQueuedSpinLock(4uLL, v34);
  }
  v21 = v51;
LABEL_17:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x551uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v10 & 0xFFFFF) != 0
    || v10 < 0x100000
    || v10 == *(_QWORD *)(a1 + 336) )
  {
    v45 = 1;
  }
  v23 = *(_QWORD *)(a1 + 32);
  v24 = *(_QWORD *)(a1 + 88);
  if ( v23 > 0x2000000 )
  {
    v27 = a2;
    v28 = 0;
    v29 = 25;
    do
    {
      v30 = v29;
      v29 += 7;
      ++v28;
    }
    while ( v23 > 1LL << v29 );
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * (a2 >> v30));
    if ( !VacbMiss )
      goto LABEL_46;
    do
    {
      if ( !v28 )
        break;
      v31 = 1LL << v30;
      v30 -= 7;
      v27 &= v31 - 1;
      --v28;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v27 >> v30)];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement(VacbMiss + 4) )
      KeBugCheckEx(0x34u, 0x9BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    ExReleasePushLockEx(a1 + 104, 0LL);
    v10 = v46;
    goto LABEL_29;
  }
LABEL_46:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = (volatile signed __int32 *)CcGetVacbMiss(a1, a2, v21, v44);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v10 & 0xFFFFF) == 0 && v10 >= 0x100000 )
  {
    v10 -= 0x100000LL;
    v46 = v10;
    CcUnmapVacbArray(a1, &v46, 0x100000u, 1, 0, 0);
  }
LABEL_29:
  if ( !v45 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v10 >= 8650752 )
      {
        v46 = v10 - 0x800000;
        CcUnmapVacbArray(a1, &v46, 0x800000u, 1, 0, 0);
        goto LABEL_30;
      }
      v48 = 0x40000LL;
      v37 = &v48;
    }
    else
    {
      v36 = CcUnmapBehindLength;
      if ( v10 >= (unsigned int)CcUnmapBehindLength )
      {
        v37 = &v46;
        v46 = v10 - (unsigned int)CcUnmapBehindLength;
LABEL_55:
        CcUnmapVacbArray(a1, v37, v36, 1, 0, 0);
        goto LABEL_30;
      }
      v47 = 0LL;
      v37 = &v47;
    }
    v36 = v10;
    goto LABEL_55;
  }
LABEL_30:
  *v52 = VacbMiss;
  *v53 = 0x40000 - v8;
  return v8 + *(_QWORD *)VacbMiss;
}
