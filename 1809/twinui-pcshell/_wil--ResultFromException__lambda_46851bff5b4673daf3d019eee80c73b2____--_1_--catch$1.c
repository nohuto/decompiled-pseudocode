/*
 * XREFs of _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$1 @ 0x1800ACDC7
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_180031B9D;
}
