/*
 * XREFs of MiForceSectionClosed @ 0x14012219C
 * Callers:
 *     MmForceSectionClosed @ 0x140122160 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x1402A3B20 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x140122240 (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  int v3; // r14d
  KIRQL v5; // di
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx

  v3 = a2 & 1;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140439C80);
    v6 = v3 ? *a1 : a1[2];
    if ( !v6 )
      break;
    v7 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    if ( v7 )
    {
      LOBYTE(v8) = v5;
      LOBYTE(v9) = (a2 & 4) != 0;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v6, v8, v9) != 0);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v12);
  }
  __writecr8(v5);
  return 0LL;
}
