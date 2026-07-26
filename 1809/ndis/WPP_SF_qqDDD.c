/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0043EE8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDDD(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, va);
}
