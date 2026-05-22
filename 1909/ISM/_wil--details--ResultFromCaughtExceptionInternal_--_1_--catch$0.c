/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x18005156B
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x18004FFC4 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_0(__int64 a1, __int64 a2)
{
  wil::details *v3; // rbx

  **(_BYTE **)(a2 + 112) = 1;
  v3 = *(wil::details **)(a2 + 40);
  wil::details::MaybeGetExceptionString(
    v3,
    *(const struct wil::ResultException **)(a2 + 96),
    *(unsigned __int16 **)(a2 + 104));
  *(_DWORD *)(a2 + 96) = *((_DWORD *)v3 + 7);
  return &loc_18005154B;
}
