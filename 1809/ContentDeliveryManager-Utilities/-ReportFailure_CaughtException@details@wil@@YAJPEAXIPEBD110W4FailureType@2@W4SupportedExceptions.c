/*
 * XREFs of ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180003580
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036EC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003784 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180003114 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800C7E10 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException(__int64 a1, unsigned int a2, __int64 a3)
{
  return wil::details::ReportFailure_CaughtExceptionCommon(a1, a2, a3);
}
