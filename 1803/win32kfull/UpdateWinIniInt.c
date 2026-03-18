/*
 * XREFs of UpdateWinIniInt @ 0x1C01A51C0
 * Callers:
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00650D8 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxSetIMEShowStatus @ 0x1C0112334 (xxxSetIMEShowStatus.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01A472C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateWinIniInt(__int64 a1, unsigned int a2, unsigned int a3)
{
  wchar_t pszDest[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-78h] BYREF

  RtlStringCchPrintfW(pszDest, 0x10uLL, L"%d");
  RtlLoadStringOrError(a3, v8, 40LL);
  return FastWriteProfileStringW(a1, a2, v8, pszDest);
}
