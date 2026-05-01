/*
 * XREFs of _wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03____::_1_::catch$7 @ 0x18030C735
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180166380 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03____::_1_::catch_7(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_18030C71A;
}
