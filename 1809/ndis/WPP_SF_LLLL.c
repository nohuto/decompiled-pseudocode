/*
 * XREFs of WPP_SF_LLLL @ 0x1C0043CA0
 * Callers:
 *     ndisValidateQosParameters @ 0x1C004923C (ndisValidateQosParameters.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LLLL(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0x8Du, &v4);
}
