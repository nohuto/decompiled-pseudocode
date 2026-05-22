/*
 * XREFs of ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180114DFC
 * Callers:
 *     wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_d40cbd92f902ffb664072dbc4c9f7174___ @ 0x18010F494 (wil--MakeAgileCallback_Windows--System--IDispatcherQueueHandler__lambda_d40cbd92f902ffb664072dbc.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180011008 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    69LL,
    (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
    0LL,
    0LL,
    retaddr);
}
