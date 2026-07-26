/*
 * XREFs of WPP_SF_qDL @ 0x1C00616A0
 * Callers:
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisReferenceOpenByHandle @ 0x1C001BC04 (ndisReferenceOpenByHandle.c)
 *     ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74 (ndisMIndicateHwTimestampCapabilitiesChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qDL(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
