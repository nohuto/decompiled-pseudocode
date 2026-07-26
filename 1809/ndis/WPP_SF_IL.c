/*
 * XREFs of WPP_SF_IL @ 0x1C0041954
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0024140 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_IL(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, &v4, 8LL, &v5, 4LL, 0LL);
}
