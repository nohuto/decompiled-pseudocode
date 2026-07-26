/*
 * XREFs of WPP_SF_q_guid_ @ 0x1C006540C
 * Callers:
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_q_guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3;
  ndisWppFastTraceMessage(&WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, 0x86u, &v4, 8LL, a4, 16LL, 0LL);
}
