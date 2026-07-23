/*
 * XREFs of MiOffsetToProtos @ 0x1400AF770
 * Callers:
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiDereferenceDataSubsections @ 0x1402C4BE8 (MiDereferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x1405E0500 (MiAddMappedPtes.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140639940 (MmHardFaultBytesRequired.c)
 *     MiLogRelocationRva @ 0x14064C34C (MiLogRelocationRva.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x140651840 (MiScanRelocationPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpTryAcquireSpinLockShared @ 0x1400AFB60 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocatePagefileSubsection @ 0x140119DB8 (MiLocatePagefileSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 v6; // rcx
  int v8; // eax
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rax
  __int64 i; // rcx
  unsigned __int64 v14; // rbp
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int8 v17; // bp
  struct _KPRCB *v18; // r15
  _DWORD *v19; // rcx
  signed __int32 v20; // ett
  __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _QWORD *v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdx
  unsigned __int64 j; // rdx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v6 = a2 >> 12;
  *a3 = a2 >> 12;
  v8 = *(_DWORD *)(a1 + 56);
  if ( (v8 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v8 & 0x400) != 0 )
  {
    v14 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, CurrentIrql);
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
      if ( !(unsigned __int8)ExpTryAcquireSpinLockShared(a1 + 72) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[5] - 1;
            v34[5] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(a1 + 72, CurrentIrql);
      }
    }
    v12 = *(_QWORD *)(a1 + 272);
    for ( i = 0LL; v12; v12 = *(_QWORD *)(v12 + 8) )
      i = v12;
    v14 = (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26))
        + *(unsigned int *)(i - 12)
        - (unsigned __int64)(*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
    }
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v38 = v16[5] - 1;
        v16[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v15);
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
  if ( v6 >= v14 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection(a1 + 128, a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v4 = (_QWORD *)(a1 + 128);
    for ( j = *(unsigned int *)(a1 + 172); v6 >= j; j = *((unsigned int *)v4 + 11) )
    {
      v6 -= j;
      *a3 = v6;
      v4 = (_QWORD *)v4[2];
    }
  }
  else
  {
    if ( a2 >= 0x3FFFFFFFFFF000LL )
      goto LABEL_34;
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, v17);
    }
    else
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v40 = v19[5];
          v19[5] = v40 + 1;
          if ( v40 == -1 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      _m_prefetchw((const void *)(a1 + 72));
      v20 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
      if ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v20 + 1, v20) )
      {
        v35 = v18->SchedulerAssist;
        if ( v35 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v41 = v35[5] - 1;
            v35[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(a1 + 72, v17);
      }
    }
    v21 = *(_QWORD *)(a1 + 288);
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
        if ( v17 != 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
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
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
          {
            v43 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v43);
          }
          __writecr8(v17);
        }
        v4 = (_QWORD *)v21;
        goto LABEL_34;
      }
    }
    v29 = *(_QWORD **)(a1 + 272);
    if ( v29 )
    {
      v30 = (unsigned int)v22 | ((v25 & 0x3FF) << 32);
      do
      {
        v31 = *((unsigned int *)v29 - 5) | ((unsigned __int64)(*(_WORD *)(v29 - 3) & 0xFFC0) << 26);
        v32 = v31 + *((unsigned int *)v29 - 4);
        if ( *((_WORD *)v29 - 11) < 0x10u )
          --v32;
        if ( v30 > v32 )
        {
          v29 = (_QWORD *)v29[1];
        }
        else
        {
          if ( v30 >= v31 )
          {
            v4 = v29 - 7;
            *(_QWORD *)(a1 + 288) = v29 - 7;
            if ( v17 != 17 )
            {
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
              {
LABEL_104:
                v44 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v44);
              }
LABEL_50:
              __writecr8(v17);
            }
            goto LABEL_34;
          }
          v29 = (_QWORD *)*v29;
        }
      }
      while ( v29 );
    }
    if ( v17 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        goto LABEL_104;
      goto LABEL_50;
    }
LABEL_34:
    *a3 -= *((unsigned int *)v4 + 9) | ((unsigned __int64)((_WORD)v4[4] & 0xFFC0) << 26);
  }
  return (__int64)v4;
}
