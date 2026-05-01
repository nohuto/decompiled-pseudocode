/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1800AF1F8
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1800DFC80 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 88),
    *(const struct std::exception **)(a2 + 112),
    *(unsigned __int16 **)(a2 + 120),
    a4);
  return &loc_1800D9E9B;
}
