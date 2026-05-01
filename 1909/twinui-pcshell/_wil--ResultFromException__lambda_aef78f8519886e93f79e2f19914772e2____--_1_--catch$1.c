/*
 * XREFs of _wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2____::_1_::catch$1 @ 0x1803B3728
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1803B371E;
}
