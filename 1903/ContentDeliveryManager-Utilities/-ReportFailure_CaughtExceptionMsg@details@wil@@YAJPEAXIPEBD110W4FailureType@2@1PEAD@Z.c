/*
 * XREFs of ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x180044CA0
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180044DD8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001A38 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180001B10 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180003034 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CBD30 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9)
{
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2048h] BYREF
  wchar_t v14[2048]; // [rsp+1050h] [rbp-1048h] BYREF

  if ( a8 )
  {
    StringCchPrintfW(v14, 2048LL, L"%hs");
    StringCchVPrintfW(Buffer, 2048LL, v14, a9);
  }
  else
  {
    Buffer[0] = 0;
  }
  StringCchCatW(Buffer, 2048LL, (char *)L" -- ");
  return wil::details::ReportFailure_CaughtExceptionCommon(a1, a2, a3);
}
