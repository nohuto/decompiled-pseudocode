/*
 * XREFs of _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1803315CC
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1803315C2;
}
