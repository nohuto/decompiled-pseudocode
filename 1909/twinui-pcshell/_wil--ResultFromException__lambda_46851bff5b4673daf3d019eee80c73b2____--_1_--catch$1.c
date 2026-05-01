/*
 * XREFs of _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$1 @ 0x1800E4FB1
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_180015E79;
}
