/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0
 * Callers:
 *     _lambda_0363cee2f58c69e5cfc10338858e366e_::operator() @ 0x1C00921B4 (_lambda_0363cee2f58c69e5cfc10338858e366e_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00925B4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00944E0 (ndisQueuedStatusUnbindAdapter.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_PROTOCOL_LINK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  *(_QWORD *)a2 = a1->BindState.Miniport;
  *((_QWORD *)a2 + 1) = a1->BindDriver._p->_t.Name.__ptr_.__value_;
}
