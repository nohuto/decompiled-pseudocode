/*
 * XREFs of WPP_SF__guid_d @ 0x1C0041CF0
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BA990 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00F2BEC (ndisLWMOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_d(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, &v4, 4LL, 0LL);
}
