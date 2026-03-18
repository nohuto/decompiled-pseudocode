/*
 * XREFs of MiForceSectionClosed @ 0x14012570C
 * Callers:
 *     MmForceSectionClosed @ 0x1401256D0 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x1402BAA50 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x1401257AC (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  int v3; // r14d
  KIRQL v5; // di
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx

  v3 = a2 & 1;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140464280);
    v6 = v3 ? *a1 : a1[2];
    if ( !v6 )
      break;
    v7 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
    if ( v7 )
    {
      LOBYTE(v8) = v5;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v6, v8, a2 & 4) != 0);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(v5);
  return 0LL;
}
