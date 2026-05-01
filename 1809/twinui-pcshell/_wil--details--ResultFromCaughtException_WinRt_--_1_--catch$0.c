/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$0 @ 0x1800AF067
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z @ 0x18025B6A8 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details *v5; // rbx

  v5 = *(wil::details **)(a2 + 40);
  wil::details::MaybeGetExceptionString(
    v5,
    *(const struct wil::ResultException **)(a2 + 112),
    *(wchar_t **)(a2 + 120),
    a4);
  *(_DWORD *)(a2 + 136) = *((_DWORD *)v5 + 7);
  return &loc_18007A553;
}
