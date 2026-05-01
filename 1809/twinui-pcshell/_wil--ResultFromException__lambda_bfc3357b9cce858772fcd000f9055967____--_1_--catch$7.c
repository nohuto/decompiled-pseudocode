/*
 * XREFs of _wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967____::_1_::catch$7 @ 0x1800924ED
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967____::_1_::catch_7(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1800924D2;
}
