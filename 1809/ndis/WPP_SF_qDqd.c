/*
 * XREFs of WPP_SF_qDqd @ 0x1C005AE1C
 * Callers:
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C005BA30 (ndisFInvokeSynchronousOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_121f726d2db93de0e5803b82441184b1_Traceguids, 0x8Au, &v4);
}
