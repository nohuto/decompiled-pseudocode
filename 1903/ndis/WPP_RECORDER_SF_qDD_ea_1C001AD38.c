/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C001AD38
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisOidPreLinkState @ 0x1C001ABD0 (ndisOidPreLinkState.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ndisPreOffloadAdminSettings @ 0x1C0022100 (ndisPreOffloadAdminSettings.c)
 *     ndisSetMiniportPacketFilter @ 0x1C0026694 (ndisSetMiniportPacketFilter.c)
 *     ndisReadOffloadRegistry @ 0x1C002B2C4 (ndisReadOffloadRegistry.c)
 *     ndisPreSetPMParameters @ 0x1C0034E14 (ndisPreSetPMParameters.c)
 *     ndisOidPreOffloadHwCaps @ 0x1C003C460 (ndisOidPreOffloadHwCaps.c)
 *     ndisOidPreGetPciDeviceCustomProperties @ 0x1C006CBD0 (ndisOidPreGetPciDeviceCustomProperties.c)
 *     ndisOidPreHDSplitCurrentConfig @ 0x1C006CD30 (ndisOidPreHDSplitCurrentConfig.c)
 *     ndisOidPreMaxLinkSpeed @ 0x1C006D190 (ndisOidPreMaxLinkSpeed.c)
 *     ndisOidPreQosCapabilities @ 0x1C006DBC0 (ndisOidPreQosCapabilities.c)
 *     ndisOidPreQosGetParameters @ 0x1C006DD00 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQosSetParameters @ 0x1C006DEF0 (ndisOidPreQosSetParameters.c)
 *     ndisOidPreSetHDSplitParameters @ 0x1C006E270 (ndisOidPreSetHDSplitParameters.c)
 *     ndisOidPreTcpConnectionOffload @ 0x1C006E8B0 (ndisOidPreTcpConnectionOffload.c)
 *     ndisOidPreTcpConnectionOffloadHwCaps @ 0x1C006E9E0 (ndisOidPreTcpConnectionOffloadHwCaps.c)
 *     ndisOidPreTcpConnectionOffloadParameters @ 0x1C006EB10 (ndisOidPreTcpConnectionOffloadParameters.c)
 *     ndisPreTaskOffloadSet @ 0x1C006EE54 (ndisPreTaskOffloadSet.c)
 *     ndisOidPrePMCapabilities @ 0x1C0074164 (ndisOidPrePMCapabilities.c)
 *     ndisPreQueryPMParameters @ 0x1C0075720 (ndisPreQueryPMParameters.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 *     ndisOidPreIovBarResources @ 0x1C00B2B40 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCaps @ 0x1C00B2CB0 (ndisOidPreIovCaps.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00B3310 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00B3E40 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00B3FB0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovOverlyingAdapterInfo @ 0x1C00B4480 (ndisOidPreIovOverlyingAdapterInfo.c)
 *     ndisOidPreIovPfLuid @ 0x1C00B4570 (ndisOidPreIovPfLuid.c)
 *     ndisOidPreIovProbedBars @ 0x1C00B46A0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00B47D0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00B4940 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00B4AB0 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00B4BF0 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00B4D30 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovVfSerialNumber @ 0x1C00B5250 (ndisOidPreIovVfSerialNumber.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00B5380 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00B54D0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FC61C (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C01175DC (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v11; // rdi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, &a6, 8LL, &a7, 4LL, va, 4LL, 0LL);
}
