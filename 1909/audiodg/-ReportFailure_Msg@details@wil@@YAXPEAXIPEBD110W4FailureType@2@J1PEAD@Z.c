/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x140035A1C
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x140035A10 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000777C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140018180 (_alloca_probe.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x140027E18 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x140028770 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

void __fastcall wil::details::ReportFailure_Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        char *a10)
{
  unsigned __int16 v13[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t Buffer[512]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    StringCchPrintfW((wchar_t *)Buffer, 2048LL, L"%hs");
    StringCchVPrintfW(v13, 0x800uLL, Buffer, a10);
  }
  else
  {
    v13[0] = 0;
  }
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 1, a8, v13);
}
