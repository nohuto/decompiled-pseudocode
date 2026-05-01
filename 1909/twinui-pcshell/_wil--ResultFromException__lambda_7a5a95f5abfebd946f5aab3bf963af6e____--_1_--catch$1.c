/*
 * XREFs of _wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____::_1_::catch$1 @ 0x1803BEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1803BEBA6;
}
