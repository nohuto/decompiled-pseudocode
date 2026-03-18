/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x140596AA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PopPowerActionWatchdog @ 0x1402F7D60 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeoutsFromRegistry @ 0x140725BC0 (PopUpdatePowerActionWatchdogTimeoutsFromRegistry.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  int v2; // ecx

  if ( a1 <= 2 && dword_1404431DC != a1 )
  {
    if ( dword_1404431DC )
    {
      if ( !KeCancelTimer(&stru_140443198) )
        PopPowerActionWatchdog();
      qword_1404431E0 = 0LL;
      dword_1404431DC = 0;
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
        qword_1404431E0 = MEMORY[0xFFFFF78000000008];
        dword_1404431DC = a1;
        KiSetTimerEx((__int64)&stru_140443198, -10000000LL * v2, 0, 0, (__int64)&dword_140443158);
      }
    }
  }
}
