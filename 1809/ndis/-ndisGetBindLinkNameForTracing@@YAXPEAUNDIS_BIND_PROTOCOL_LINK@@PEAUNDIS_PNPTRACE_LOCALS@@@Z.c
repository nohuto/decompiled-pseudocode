/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8
 * Callers:
 *     _lambda_8cf7bed277b840ea59cbc6a15c16d068_::operator() @ 0x1C005DC58 (_lambda_8cf7bed277b840ea59cbc6a15c16d068_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005DE88 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_PROTOCOL_LINK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  *(_QWORD *)a2 = a1->BindState.Miniport;
  *((_QWORD *)a2 + 1) = a1->BindDriver._p->_t.Name._Myptr;
}
