/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000B424
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008D5C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002947C (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18000B3C4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, (unsigned int)a2, a3, (__int64)a4, v4, retaddr, 2, (int)a4);
}
