/*
 * XREFs of WPP_SF_qDqL @ 0x1C0041FBC
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000D970 (ndisPreProcessOid.c)
 *     ndisInvokeOidRequestComplete @ 0x1C0020F00 (ndisInvokeOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C005B7C8 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005B8E4 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005EA14 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0062CD0 (ndisMIndicateQosParametersChange.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00E2DB0 (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
