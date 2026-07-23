/*
 * XREFs of MiLocateSubsectionNode @ 0x140077B30
 * Callers:
 *     MiAdvanceVadView @ 0x140025614 (MiAdvanceVadView.c)
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiComputeDataFlushRange @ 0x140076E20 (MiComputeDataFlushRange.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiDereferenceDataSubsections @ 0x1402C4BE8 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  KIRQL v5; // bp
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  _QWORD *v12; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx

  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 == 1 )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 288);
  v7 = a2 >> 12;
  v8 = *(unsigned int *)(v6 + 36) | ((unsigned __int64)(*(_WORD *)(v6 + 32) & 0xFFC0) << 26);
  v9 = v8 + *(unsigned int *)(v6 + 40);
  if ( *(_WORD *)(v6 + 34) < 0x10u )
    --v9;
  v10 = HIDWORD(v7);
  if ( v7 >= v8 )
  {
    v10 = HIDWORD(v7);
    if ( v7 <= v9 )
    {
      if ( v5 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v5);
      }
      return (_QWORD *)v6;
    }
  }
  v12 = *(_QWORD **)(a1 + 272);
  if ( !v12 )
  {
LABEL_23:
    if ( v5 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v19);
      }
      __writecr8(v5);
    }
    return 0LL;
  }
  v13 = (unsigned int)v7 | ((v10 & 0x3FF) << 32);
  while ( 1 )
  {
    v14 = *((unsigned int *)v12 - 5) | ((unsigned __int64)(*(_WORD *)(v12 - 3) & 0xFFC0) << 26);
    v15 = v14 + *((unsigned int *)v12 - 4);
    if ( *((_WORD *)v12 - 11) < 0x10u )
      --v15;
    if ( v13 <= v15 )
      break;
    v12 = (_QWORD *)v12[1];
LABEL_22:
    if ( !v12 )
      goto LABEL_23;
  }
  if ( v13 < v14 )
  {
    v12 = (_QWORD *)*v12;
    goto LABEL_22;
  }
  v16 = v12 - 7;
  *(_QWORD *)(a1 + 288) = v12 - 7;
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(v5);
  }
  return v16;
}
