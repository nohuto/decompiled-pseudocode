/*
 * XREFs of WPP_SF_qq_guid_ @ 0x1C0065450
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C00F16A0 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qq_guid_(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, 0x8Du, va);
}
