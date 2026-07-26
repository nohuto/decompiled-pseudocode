/*
 * XREFs of WPP_SF_qDqLLLL @ 0x1C00617B8
 * Callers:
 *     ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74 (ndisMIndicateHwTimestampCapabilitiesChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqLLLL(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+B0h] [rbp+18h] BYREF
  int v5; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_f453a6740ca1326a168191528118e90e_Traceguids, 0x111u, &v4);
}
