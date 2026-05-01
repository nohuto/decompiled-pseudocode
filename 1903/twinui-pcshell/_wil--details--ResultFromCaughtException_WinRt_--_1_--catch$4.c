/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x1802B370F
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z @ 0x1802B3404 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details *v3; // rbx

  v3 = *(wil::details **)(a2 + 64);
  wil::details::MaybeGetExceptionString(v3, *(const struct wil::ResultException **)(a2 + 112), *(wchar_t **)(a2 + 120));
  *(_DWORD *)(a2 + 136) = *((_DWORD *)v3 + 7);
  return &loc_1802B35FF;
}
