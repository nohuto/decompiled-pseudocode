/*
 * XREFs of PopPepReleaseActivityLink @ 0x1400FF72C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400FEEFC (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400FF594 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140158704 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DC7E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402DC8C4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DC9A8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCA9C (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPepReleaseActivityLink(__int64 a1, volatile LONG *a2, char a3, unsigned __int8 a4)
{
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = a4;
  __writecr8(a4);
  return result;
}
