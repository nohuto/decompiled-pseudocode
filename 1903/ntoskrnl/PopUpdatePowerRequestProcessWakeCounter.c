/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x1406A0280
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A057C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140789DE8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14069DEE0 (PopStatsMarkPowerRequestInactive.c)
 *     PsChargeProcessWakeCounter @ 0x14069E180 (PsChargeProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x14069E364 (PopStatsMarkPowerRequestActive.c)
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
      *(_QWORD *)(a1 + 112) = PsChargeProcessWakeCounter(*(_QWORD *)(a1 + 120), 0, 1u, a1);
    }
  }
  else if ( v3 )
  {
    PsReleaseProcessWakeCounter(v3, a1);
    *(_QWORD *)(a1 + 112) = 0LL;
    PopStatsMarkPowerRequestInactive(a1);
  }
}
