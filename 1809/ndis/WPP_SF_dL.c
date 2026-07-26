/*
 * XREFs of WPP_SF_dL @ 0x1C0041D30
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C0022C40 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0041380 (NdisIfDeleteIfStackEntry.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dL(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, &v4);
}
