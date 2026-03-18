/*
 * XREFs of PopSetPowerActionState @ 0x14015EE4C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140727BB0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14072AE70 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140442FC1 != a1 )
  {
    byte_140442FC1 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
