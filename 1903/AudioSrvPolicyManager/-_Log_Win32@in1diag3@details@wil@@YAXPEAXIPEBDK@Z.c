/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800086E4
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x1800054E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180025DBC (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180008764 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details::ReportFailure_Win32(this, a2);
}
