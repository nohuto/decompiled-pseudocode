/*
 * XREFs of WPP_SF_PP @ 0x1C004DCFC
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C0009350 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C001E6D0 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_PP(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, a1, &v3);
}
