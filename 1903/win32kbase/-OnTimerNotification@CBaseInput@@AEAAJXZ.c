/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01790C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C0139E00 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 0);
}
