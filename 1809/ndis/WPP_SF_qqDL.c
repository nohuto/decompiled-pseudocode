/*
 * XREFs of WPP_SF_qqDL @ 0x1C0043F54
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C001B034 (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C0045650 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DE0 (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, va);
}
