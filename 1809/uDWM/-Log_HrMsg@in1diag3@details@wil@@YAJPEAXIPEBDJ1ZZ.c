/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18008B374
 * Callers:
 *     ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x18004B768 (--$InternalCallback@H@-$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008C3D8 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx

  v6 = (unsigned int)a4;
  wil::details::ReportFailure_HrMsg(this, a2);
  return v6;
}
