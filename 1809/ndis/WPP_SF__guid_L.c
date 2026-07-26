/*
 * XREFs of WPP_SF__guid_L @ 0x1C0041C1C
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00E2324 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_L(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ndisWppFastTraceMessage(&WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a3, 16LL, &v4, 4LL, 0LL);
}
