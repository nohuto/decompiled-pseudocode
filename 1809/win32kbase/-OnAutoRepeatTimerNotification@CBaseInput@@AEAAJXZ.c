/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0149AF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C010EF10 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
