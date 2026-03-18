/*
 * XREFs of ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B7C2C
 * Callers:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1801B7324 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::details::ReportFailure_HrMsg(__int64 a1, __int64 a2)
{
  return wil::details::ReportFailure_Msg(a1, a2);
}
