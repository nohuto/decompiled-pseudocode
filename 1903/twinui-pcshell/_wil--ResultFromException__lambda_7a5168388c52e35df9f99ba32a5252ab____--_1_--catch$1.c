/*
 * XREFs of _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$1 @ 0x1800C58C2
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180166380 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_18005684D;
}
