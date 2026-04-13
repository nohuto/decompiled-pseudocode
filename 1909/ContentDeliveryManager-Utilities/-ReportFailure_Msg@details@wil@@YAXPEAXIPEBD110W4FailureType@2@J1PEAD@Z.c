/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180003138
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180003508 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z @ 0x180003514 (-ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180001B10 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002EFC (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CBEC0 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        char *a10)
{
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2038h] BYREF
  wchar_t v14[2048]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    StringCchPrintfW(v14, 2048LL, L"%hs");
    StringCchVPrintfW(Buffer, 2048LL, v14, a10);
  }
  else
  {
    Buffer[0] = 0;
  }
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, a7, a8, Buffer, 0);
}
