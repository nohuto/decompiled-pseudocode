/*
 * XREFs of WPP_SF_Dql @ 0x1C005E6E8
 * Callers:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Dql(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, 0x26u, &v4);
}
