/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14078C248 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406E13FC (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406E146C (PopStatsMarkPowerRequestActive.c)
 *     PsChargeProcessWakeCounter @ 0x1406EBAF0 (PsChargeProcessWakeCounter.c)
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
