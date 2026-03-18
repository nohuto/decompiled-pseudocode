/*
 * XREFs of MiOffsetToProtos @ 0x1400B5C30
 * Callers:
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MmMapViewInSystemCache @ 0x140074DD0 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x1400960E8 (MiReferenceDataSubsections.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiDereferenceDataSubsections @ 0x1402DE68C (MiDereferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x140645250 (MiScanRelocationPage.c)
 *     MiAddMappedPtes @ 0x140647FA0 (MiAddMappedPtes.c)
 *     MmHardFaultBytesRequired @ 0x14064DEA0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiLogRelocationRva @ 0x14066AE50 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocatePagefileSubsection @ 0x1400710EC (MiLocatePagefileSubsection.c)
 *     ExpTryAcquireSpinLockShared @ 0x1400B6040 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033ACA4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned int *__fastcall MiOffsetToProtos(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *v4; // rsi
  unsigned __int64 v6; // rcx
  int v8; // eax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // rbp
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int8 v18; // bp
  struct _KPRCB *v19; // r13
  _DWORD *v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _QWORD *v29; // r8
  unsigned __int16 v30; // cx
  unsigned __int64 j; // rdx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  struct _KPRCB *v43; // rcx
  unsigned __int64 v44; // r10
  struct _KPRCB *v45; // rcx
  _DWORD v46[36]; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v4 = 0LL;
  v6 = a2 >> 12;
  *a3 = a2 >> 12;
  v8 = a1[14];
  if ( (v8 & 0x20) != 0 || !*((_QWORD *)a1 + 8) || (v8 & 0x400) != 0 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
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
      _m_prefetchw(a1 + 18);
      v12 = a1[18] & 0x7FFFFFFF;
      if ( v12 != _InterlockedCompareExchange(a1 + 18, v12 + 1, v12) )
      {
        v32 = CurrentPrcb->SchedulerAssist;
        if ( v32 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v32[5] - 1;
            v32[5] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, CurrentIrql);
      }
    }
    v13 = *((_QWORD *)a1 + 34);
    for ( i = 0LL; v13; v13 = *(_QWORD *)(v13 + 8) )
      i = v13;
    v15 = (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26))
        + *(unsigned int *)(i - 12)
        - (unsigned __int64)(*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
    }
    else
    {
      _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
      _InterlockedDecrement(a1 + 18);
    }
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v38 = v17[5] - 1;
        v17[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v39 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v39);
    }
    __writecr8(CurrentIrql);
    v6 = *a3;
  }
  if ( v6 >= v15 )
    return 0LL;
  if ( !*((_QWORD *)a1 + 8) )
    return MiLocatePagefileSubsection(a1 + 32, a3);
  if ( (a1[14] & 0x20) != 0 )
  {
    v4 = a1 + 32;
    for ( j = (unsigned int)a1[43]; v6 >= j; j = (unsigned int)v4[11] )
    {
      v6 -= j;
      *a3 = v6;
      v4 = (_DWORD *)*((_QWORD *)v4 + 2);
    }
    return v4;
  }
  memset(v46, 0, sizeof(v46));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    goto LABEL_34;
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, v18);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v40 = v20[5];
        v20[5] = v40 + 1;
        if ( v40 == -1 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    if ( !(unsigned __int8)ExpTryAcquireSpinLockShared(a1 + 18) )
    {
      v33 = v19->SchedulerAssist;
      if ( v33 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v41 = v33[5] - 1;
          v33[5] = v41;
          if ( !v41 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(a1 + 18, v18);
    }
  }
  v21 = *((_QWORD *)a1 + 36);
  v22 = a2 >> 12;
  v23 = *(unsigned int *)(v21 + 36) | ((unsigned __int64)(*(_WORD *)(v21 + 32) & 0xFFC0) << 26);
  v24 = v23 + *(unsigned int *)(v21 + 40);
  if ( *(_WORD *)(v21 + 34) < 0x10u )
    --v24;
  v25 = HIDWORD(v22);
  if ( v22 >= v23 )
  {
    v25 = HIDWORD(v22);
    if ( v22 <= v24 )
    {
      if ( v18 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
        }
        else
        {
          _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
          _InterlockedDecrement(a1 + 18);
        }
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v42 = v27[5] - 1;
            v27[5] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
        {
          v43 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v43);
        }
        __writecr8(v18);
      }
      v4 = (_DWORD *)v21;
      goto LABEL_34;
    }
  }
  v29 = (_QWORD *)*((_QWORD *)a1 + 34);
  v30 = v46[8] & 0x3F | ((_WORD)v25 << 6);
  v46[9] = v22;
  LOWORD(v46[8]) = v30;
  if ( !v29 )
  {
LABEL_100:
    if ( v18 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(a1 + 18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
        goto LABEL_105;
      goto LABEL_58;
    }
    goto LABEL_34;
  }
  v44 = ((unsigned __int64)v30 << 26) ^ (unsigned int)v22 ^ (v30 << 26);
  while ( 1 )
  {
    v34 = *((unsigned int *)v29 - 5) | ((unsigned __int64)(*(_WORD *)(v29 - 3) & 0xFFC0) << 26);
    v35 = v34 + *((unsigned int *)v29 - 4);
    if ( *((_WORD *)v29 - 11) < 0x10u )
      --v35;
    if ( v44 > v35 )
    {
      v29 = (_QWORD *)v29[1];
      goto LABEL_54;
    }
    if ( v44 >= v34 )
      break;
    v29 = (_QWORD *)*v29;
LABEL_54:
    if ( !v29 )
      goto LABEL_100;
  }
  v4 = v29 - 7;
  *((_QWORD *)a1 + 36) = v29 - 7;
  if ( v18 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(a1 + 18);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
    {
LABEL_105:
      v45 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v45);
    }
LABEL_58:
    __writecr8(v18);
  }
LABEL_34:
  *a3 -= (unsigned int)v4[9] | ((unsigned __int64)((_WORD)v4[8] & 0xFFC0) << 26);
  return v4;
}
