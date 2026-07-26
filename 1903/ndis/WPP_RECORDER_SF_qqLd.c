/*
 * XREFs of WPP_RECORDER_SF_qqLd @ 0x1C001808C
 * Callers:
 *     ndisMDoDirectOidRequest @ 0x1C001D980 (ndisMDoDirectOidRequest.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C0025474 (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00255E0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreEthMulticastList @ 0x1C0025740 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreRSSParameters @ 0x1C003B010 (ndisOidPreRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C003B4B4 (ndisSetMiniportRSSParameters.c)
 *     ndisOidPreRSSCaps @ 0x1C003CAC0 (ndisOidPreRSSCaps.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C005F930 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C0060430 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C0060C50 (ndisOidPreReceiveFilterCaps.c)
 *     ndisFDoDirectOidRequestInternal @ 0x1C006A6C0 (ndisFDoDirectOidRequestInternal.c)
 *     ndisOidPreOffloadCaps @ 0x1C006D660 (ndisOidPreOffloadCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C006E760 (ndisOidPreTaskOffload.c)
 *     ndisPreTaskOffloadQuery @ 0x1C006EC38 (ndisPreTaskOffloadQuery.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00B2A00 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00B3000 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00B41F0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00B4EB0 (ndisOidPreIovVPortParameters.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6178 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6580 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreRSSv2Parameters @ 0x1C00C7080 (ndisOidPreRSSv2Parameters.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00FC890 (ndisInvokeNetPnPEvent.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01218D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqLd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  unsigned __int64 v12; // rdi
  int v13; // eax
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va, a8);
  v12 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v12 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, &a8, 4LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v15, &a6, 8LL, &a7, 8LL, &a8, 4LL, va);
}
