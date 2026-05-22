/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180059618
 * Callers:
 *     _ViewHierarchy::GetAllAncestors_::_1_::catch$154 @ 0x18005945F (_ViewHierarchy--GetAllAncestors_--_1_--catch$154.c)
 *     _ViewHierarchy::GetTopLevelHostView_::_1_::catch$0 @ 0x18005954D (_ViewHierarchy--GetTopLevelHostView_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18005986C (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        ...)
{
  return wil::details::ReportFailure_CaughtExceptionMsg(this, a2);
}
