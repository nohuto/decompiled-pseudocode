/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x140596AA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PopPowerActionWatchdog @ 0x1402F7810 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeoutsFromRegistry @ 0x140727A60 (PopUpdatePowerActionWatchdogTimeoutsFromRegistry.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  int v2; // ecx

  if ( a1 <= 2 && dword_14044315C != a1 )
  {
    if ( dword_14044315C )
    {
      if ( !KeCancelTimer(&stru_140443118) )
        PopPowerActionWatchdog();
      qword_140443160 = 0LL;
      dword_14044315C = 0;
    }
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        PopUpdatePowerActionWatchdogTimeoutsFromRegistry();
        v2 = PopPowerActionTransitioningWatchdogTimeout;
      }
      else
      {
        v2 = PopPowerActionResumingWatchdogTimeout;
      }
      if ( v2 )
      {
        qword_140443160 = MEMORY[0xFFFFF78000000008];
        dword_14044315C = a1;
        KiSetTimerEx((__int64)&stru_140443118, -10000000LL * v2, 0, 0, (__int64)&dword_1404430D8);
      }
    }
  }
}
