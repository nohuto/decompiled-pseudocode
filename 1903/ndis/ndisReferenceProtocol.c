/*
 * XREFs of ndisReferenceProtocol @ 0x1C0028420
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C0092DB0 (NdisReEnumerateProtocolBindings.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0105388 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C0121D9C (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ndisReferenceProtocolByName @ 0x1C0138BCC (ndisReferenceProtocolByName.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     WPP_RECORDER_SF_DqlD @ 0x1C00284A0 (WPP_RECORDER_SF_DqlD.c)
 */

bool __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  bool v2; // bl
  int v3; // r9d
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 32), a2, &v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqlD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *(unsigned __int8 *)(a1 + 42),
      *(unsigned __int16 *)(a1 + 40),
      v3);
  return v2;
}
