/*
 * XREFs of WPP_SF_qdd @ 0x1C007C620
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C007CD04 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C007CFC0 (ndisOidPrePDQueryConfig.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qdd(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
