/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1802D2BC7
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1802D2950 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_2(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(*(wil::details **)(a2 + 56), *(wchar_t **)(a2 + 112), *(wchar_t **)(a2 + 120));
  return &loc_1802D2B28;
}
