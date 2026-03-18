/*
 * XREFs of PopSetPowerActionState @ 0x14015E7AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140725D10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140729B00 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140443041 != a1 )
  {
    byte_140443041 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
