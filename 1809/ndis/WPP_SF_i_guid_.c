/*
 * XREFs of WPP_SF_i_guid_ @ 0x1C0041F20
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_i_guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3;
  ndisWppFastTraceMessage(&WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, 0xA5u, &v4, 8LL, a4, 16LL, 0LL);
}
