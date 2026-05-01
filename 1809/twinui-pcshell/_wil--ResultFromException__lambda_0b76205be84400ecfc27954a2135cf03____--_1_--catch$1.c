/*
 * XREFs of _wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03____::_1_::catch$1 @ 0x18009242C
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

void *__fastcall wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_180092422;
}
