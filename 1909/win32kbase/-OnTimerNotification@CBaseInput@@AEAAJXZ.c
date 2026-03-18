/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0176ED0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 0);
}
