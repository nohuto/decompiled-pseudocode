/*
 * XREFs of WPP_SF_qqDD @ 0x1C003A8AC
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F030 (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001F2CC (ndisSetMiniportRSSParameters.c)
 *     ndisFDoDirectOidRequestInternal @ 0x1C0044CE0 (ndisFDoDirectOidRequestInternal.c)
 *     ndisMDoDirectOidRequest @ 0x1C00458A0 (ndisMDoDirectOidRequest.c)
 *     ndisOidPreOffloadCaps @ 0x1C0047440 (ndisOidPreOffloadCaps.c)
 *     ndisPreTaskOffloadQuery @ 0x1C0047F64 (ndisPreTaskOffloadQuery.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0080FF8 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0081340 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreRSSv2Parameters @ 0x1C0081AB0 (ndisOidPreRSSv2Parameters.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00C2ED4 (ndisInvokeNetPnPEvent.c)
 *     ndisOidPreRSSParameters @ 0x1C00CB5A0 (ndisOidPreRSSParameters.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00CD1C0 (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreEthMulticastList @ 0x1C00CD290 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00CF7C0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreRSSCaps @ 0x1C00D0DB0 (ndisOidPreRSSCaps.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C00E1D40 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C00E1FA0 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00E21D0 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C00E45B0 (ndisOidPreTaskOffload.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00F9540 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00F9A20 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00FA0B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00FAB60 (ndisOidPreIovVPortParameters.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
