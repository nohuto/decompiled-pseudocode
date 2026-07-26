/*
 * XREFs of WPP_SF_LLLLLLLL @ 0x1C00614C0
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C0062CD0 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LLLLLLLL(__int64 a1, __int64 a2, int a3)
{
  int v3; // [rsp+E8h] [rbp+47h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_f453a6740ca1326a168191528118e90e_Traceguids, 0xB3u, &v3);
}
