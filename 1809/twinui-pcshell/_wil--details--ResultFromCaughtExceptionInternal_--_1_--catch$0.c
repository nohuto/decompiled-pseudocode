/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x1800AF49D
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x1800DFC54 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details *v5; // rbx

  **(_BYTE **)(a2 + 112) = 1;
  v5 = *(wil::details **)(a2 + 40);
  wil::details::MaybeGetExceptionString(
    v5,
    *(const struct wil::ResultException **)(a2 + 96),
    *(unsigned __int16 **)(a2 + 104),
    a4);
  *(_DWORD *)(a2 + 96) = *((_DWORD *)v5 + 7);
  return &loc_180081105;
}
