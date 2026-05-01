/*
 * XREFs of _wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167____::_1_::catch$1 @ 0x180095620
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_8f06f521b4af2551e491113924647167____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_180095616;
}
