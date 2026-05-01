/*
 * XREFs of ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1802A32E4
 * Callers:
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1802A2F00 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180109108 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Win32(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32(
    (__int64)this,
    237LL,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
    (__int64)a4,
    v4,
    retaddr,
    0,
    (int)a4);
}
