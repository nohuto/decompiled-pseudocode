/*
 * XREFs of WPP_SF_qqil @ 0x1C0064940
 * Callers:
 *     NdisSetTimerObject @ 0x1C0011F00 (NdisSetTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqil(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_f50270d3ac6439ecad1a10c8aacbf967_Traceguids, 0xAu, va);
}
