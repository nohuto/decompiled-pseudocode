/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14058999C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140589D88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140763408 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PopStatsMarkPowerRequestInactive @ 0x14058866C (PopStatsMarkPowerRequestInactive.c)
 *     PsChargeProcessWakeCounter @ 0x140588720 (PsChargeProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x140588904 (PopStatsMarkPowerRequestActive.c)
 *     PsReleaseProcessWakeCounter @ 0x14061C390 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  if ( a2 )
  {
    if ( !v3 )
    {
      PopStatsMarkPowerRequestActive(a1);
      *(_QWORD *)(a1 + 112) = PsChargeProcessWakeCounter(*(PVOID *)(a1 + 120));
    }
  }
  else if ( v3 )
  {
    PsReleaseProcessWakeCounter(v3, a1);
    *(_QWORD *)(a1 + 112) = 0LL;
    PopStatsMarkPowerRequestInactive(a1);
  }
}
