/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18018ACEC
 * Callers:
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x18018AB94 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 *     ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x18022FF0C (-WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18018C0F4 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        ...)
{
  wil::details::ReportFailure_HrMsg(this, a2);
}
