/*
 * XREFs of ndisReferenceProtocol @ 0x1C001A488
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00BEAB8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00EDA40 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisPDStartup @ 0x1C0101EF0 (NdisPDStartup.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisReferenceProtocolByName @ 0x1C01179F0 (ndisReferenceProtocolByName.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     WPP_SF_DqlD @ 0x1C005E740 (WPP_SF_DqlD.c)
 */

char __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  char v3; // bl
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v3 = ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 32));
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_DqlD(
      v5,
      *(unsigned __int8 *)(v5 + 42),
      a2,
      &v5,
      *(unsigned __int16 *)(v5 + 40),
      *(unsigned __int8 *)(v5 + 42));
  return v3;
}
