/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x1400725E0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 *     MiCreateUserPhysicalView @ 0x14089646C (MiCreateUserPhysicalView.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  KIRQL CurrentIrql; // di
  volatile signed __int32 *v3; // rcx
  struct _KPRCB *v4; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // eax
  struct _KPRCB *v9; // rcx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  memset(v10, 0, 0x28uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v3 = (volatile signed __int32 *)(a1 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    LODWORD(v10[1]) = 2;
    v10[4] = &v10[3];
    LOWORD(v10[2]) = 263;
    v10[3] = &v10[3];
    v10[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v10;
    BYTE2(v10[2]) = 6;
    HIDWORD(v10[2]) = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    KeWaitForGate(&v10[2], 18LL);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  v4 = KeGetCurrentPrcb();
  SchedulerAssist = v4->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v4->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v8;
      if ( !v8 )
        KiRemoveSystemWorkPriorityKick(v4);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
