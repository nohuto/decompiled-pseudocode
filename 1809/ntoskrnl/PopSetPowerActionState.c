/*
 * XREFs of PopSetPowerActionState @ 0x140143524
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1406DF970 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406E3910 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_1404187A1 != a1 )
  {
    byte_1404187A1 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
