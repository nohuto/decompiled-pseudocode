/*
 * XREFs of PopPepReleaseActivityLink @ 0x1400B201C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400B17D0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400B1E84 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140168A48 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402F90AC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402F91B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402F9294 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402F9388 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
