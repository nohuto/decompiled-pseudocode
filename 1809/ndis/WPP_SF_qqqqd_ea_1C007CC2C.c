/*
 * XREFs of WPP_SF_qqqqd @ 0x1C007CC2C
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C007CEF0 (ndisOidPostPDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_ab90398e33e23eea2eee39389267d473_Traceguids, 0x1Bu, va);
}
