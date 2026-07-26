/*
 * XREFs of WPP_SF_qDDLq @ 0x1C00539E8
 * Callers:
 *     ndisReferenceVcPtr @ 0x1C011EB94 (ndisReferenceVcPtr.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDDLq(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, a1, &v4);
}
