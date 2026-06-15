/*
 * XREFs of ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FCC38
 * Callers:
 *     _lambda_1f7d91c801a964f38e999207b709b9ee_::operator() @ 0x1800FB3B8 (_lambda_1f7d91c801a964f38e999207b709b9ee_--operator().c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180013EAC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, 214LL, (__int64)"internal\\sdk\\inc\\wil/registry.h", 0LL, 0LL, retaddr);
}
