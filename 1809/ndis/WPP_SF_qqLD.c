/*
 * XREFs of WPP_SF_qqLD @ 0x1C0068D6C
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqLD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, 0xFu, va);
}
