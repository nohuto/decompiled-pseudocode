/*
 * XREFs of WPP_SF_qqqqq @ 0x1C007CC9C
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C007CEF0 (ndisOidPostPDOpenProvider.c)
 *     ndisOidPrePDQueryConfig @ 0x1C007CFC0 (ndisOidPrePDQueryConfig.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0102150 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C01024A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqq(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1, va);
}
