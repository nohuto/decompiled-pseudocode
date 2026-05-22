/*
 * XREFs of ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180055AEC
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180055AE0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180011058 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180037CA0 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800559B8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        char *a10)
{
  unsigned int v12; // esi
  __int64 v14; // [rsp+38h] [rbp-1040h]
  _BYTE v15[4096]; // [rsp+50h] [rbp-1028h] BYREF

  v12 = (unsigned int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v15, a2, a9, a10);
  LODWORD(v14) = a8;
  return wil::details::ReportFailure(a1, v12, a3, 0LL, 0LL, a6, a7, v14, (__int64)v15, 0);
}
