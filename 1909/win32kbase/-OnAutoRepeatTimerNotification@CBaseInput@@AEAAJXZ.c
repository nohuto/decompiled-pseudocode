/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01767B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
