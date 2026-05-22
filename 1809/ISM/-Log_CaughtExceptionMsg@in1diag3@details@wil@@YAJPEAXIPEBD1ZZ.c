/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18000FDE8
 * Callers:
 *     _ViewHierarchy::GetAllAncestors_::_1_::catch$2 @ 0x18012E48A (_ViewHierarchy--GetAllAncestors_--_1_--catch$2.c)
 *     _ViewHierarchy::GetTopLevelHostView_::_1_::catch$0 @ 0x18012E4EC (_ViewHierarchy--GetTopLevelHostView_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18000FD24 (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        char *a4,
        const char *a5,
        ...)
{
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_CaughtExceptionMsg(
           (__int64)this,
           (unsigned int)a2,
           a3,
           a4,
           v6,
           retaddr,
           v7,
           (unsigned __int16 *)a4,
           (va_list)&a5);
}
