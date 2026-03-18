/*
 * XREFs of CcGetVirtualAddress @ 0x1400B6060
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x14064DCE0 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x14064DF90 (CcMapData.c)
 *     CcMapDataCommon @ 0x1406C4C9C (CcMapDataCommon.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertVacbArray @ 0x1401913A8 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x140191460 (CcAllocateInitializeVacbArray.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x14027DCE0 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 **a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 *VacbMiss; // rsi
  __int64 v25; // rax
  __int16 v26; // bp
  __int64 v28; // r11
  int v29; // edx
  int v30; // ecx
  int v31; // r9d
  __int64 v32; // rax
  _DWORD *v33; // rcx
  unsigned int v34; // r8d
  __int64 *v35; // rdx
  int v36; // eax
  int v37; // eax
  bool v38; // zf
  signed __int32 v39; // eax
  int v40; // eax
  struct _KPRCB *v41; // rcx
  __int64 InitializeVacbArray; // rax
  __int64 v43; // r12
  KIRQL v44; // si
  int v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h]
  __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  __int64 v48; // [rsp+40h] [rbp-58h] BYREF
  __int64 v49; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v51; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v52; // [rsp+A8h] [rbp+10h]
  __int64 **v53; // [rsp+B0h] [rbp+18h]
  _DWORD *v54; // [rsp+B8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v46 = 0;
  v7 = a2 & 0x3FFFF;
  v9 = a2 - (a2 & 0x3FFFF);
  v47 = v9;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v51 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v36 = SchedulerAssist[5];
          SchedulerAssist[5] = v36 + 1;
          if ( v36 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140464280, 0x1Fu) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v33[5] - 1;
            v33[5] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v51 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464280, CurrentIrql);
      }
      v15 = dword_140464280;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v39 = _InterlockedCompareExchange(&dword_140464280, v15 | 0x40000000, v15);
          v38 = v15 == v39;
          v15 = v39;
          if ( !v38 )
            continue;
        }
        KeYieldProcessorEx(&v51);
        v15 = dword_140464280;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464280, retaddr);
    else
      dword_140464280 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v40 = v18[5] - 1;
        v18[5] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v41 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v41);
    }
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v16[21] + 8) )
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v47;
  }
  v19 = *(_DWORD *)(a1 + 152) & 0x200;
  v20 = v19 != 0;
  v52 = v20;
  if ( v19 || a5 )
  {
    v21 = 1;
    v45 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 || *(_DWORD *)(v6 + 856) >= 0x80u )
      goto LABEL_17;
  }
  else
  {
    v21 = 0;
    v45 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_17;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v43 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v21 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v44 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v43);
    KeReleaseQueuedSpinLock(4uLL, v44);
  }
  v20 = v52;
LABEL_17:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x56CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v9 & 0xFFFFF) != 0
    || v9 < 0x100000
    || v9 == *(_QWORD *)(a1 + 336) )
  {
    v46 = 1;
  }
  v22 = *(_QWORD *)(a1 + 32);
  v23 = *(_QWORD *)(a1 + 88);
  if ( v22 > 0x2000000 )
  {
    v28 = a2;
    v29 = 0;
    v30 = 25;
    do
    {
      v31 = v30;
      v30 += 7;
      ++v29;
    }
    while ( v22 > 1LL << v30 );
    VacbMiss = *(__int64 **)(v23 + 8 * (a2 >> v31));
    if ( !VacbMiss )
      goto LABEL_44;
    do
    {
      if ( !v29 )
        break;
      v32 = 1LL << v31;
      v31 -= 7;
      v28 &= v32 - 1;
      --v29;
      VacbMiss = (__int64 *)VacbMiss[v28 >> v31];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(__int64 **)(v23 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v25 = VacbMiss[1];
    v26 = _InterlockedIncrement((volatile signed __int32 *)VacbMiss + 4);
    if ( !v26 )
      KeBugCheckEx(0x34u, 0x9F5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v26 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 544));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v9 = v47;
    goto LABEL_31;
  }
LABEL_44:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = CcGetVacbMiss((_QWORD *)a1, a2, v20, v45);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v9 & 0xFFFFF) == 0 && v9 >= 0x100000 )
  {
    v9 -= 0x100000LL;
    v47 = v9;
    CcUnmapVacbArray(a1, &v47, 0x100000u, 1, 0, 0);
  }
LABEL_31:
  if ( !v46 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v9 >= 8650752 )
      {
        v47 = v9 - 0x800000;
        CcUnmapVacbArray(a1, &v47, 0x800000u, 1, 0, 0);
        goto LABEL_32;
      }
      v49 = 0x40000LL;
      v35 = &v49;
    }
    else
    {
      v34 = CcUnmapBehindLength;
      if ( v9 >= (unsigned int)CcUnmapBehindLength )
      {
        v35 = &v47;
        v47 = v9 - (unsigned int)CcUnmapBehindLength;
LABEL_53:
        CcUnmapVacbArray(a1, v35, v34, 1, 0, 0);
        goto LABEL_32;
      }
      v48 = 0LL;
      v35 = &v48;
    }
    v34 = v9;
    goto LABEL_53;
  }
LABEL_32:
  *v53 = VacbMiss;
  *v54 = 0x40000 - v7;
  return v7 + *VacbMiss;
}
