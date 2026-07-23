/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14058AD88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407645D8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PopStatsMarkPowerRequestInactive @ 0x14058966C (PopStatsMarkPowerRequestInactive.c)
 *     PsChargeProcessWakeCounter @ 0x140589720 (PsChargeProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x140589904 (PopStatsMarkPowerRequestActive.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
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
