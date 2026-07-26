/*
 * XREFs of WPP_SF_qqDq @ 0x1C0043FB4
 * Callers:
 *     NdisAllocateCloneOidRequest @ 0x1C000DD90 (NdisAllocateCloneOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0xC6u, va);
}
