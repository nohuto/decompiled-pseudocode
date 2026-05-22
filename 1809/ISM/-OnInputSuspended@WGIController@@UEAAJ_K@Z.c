/*
 * XREFs of ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x18006E150
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x18006E824 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WGIController::OnInputSuspended(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading(this, 0);
  return 0LL;
}
