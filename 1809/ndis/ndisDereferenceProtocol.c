/*
 * XREFs of ndisDereferenceProtocol @ 0x1C0017C5C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00BE568 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00BE9D0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00BEAB8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00EA8F4 (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00EDA40 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C0101314 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C0117730 (NdisDeregisterProtocol.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005DCF0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     WPP_SF_Dql @ 0x1C005E6E8 (WPP_SF_Dql.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rbx
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *v5; // rcx
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rdx
  KIRQL v7; // di
  PVOID v8; // rcx
  unsigned int v9; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  v3 = this;
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_Dql(this, a2, a3, this, this->Ref.ReferenceCount - 1);
  if ( (unsigned __int8)ndisDereferenceRef(&v3->Ref.SpinLock) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    v5 = ndisProtocolList;
    p_NextProtocol = &ndisProtocolList;
    v7 = v4;
    while ( v5 )
    {
      if ( v5 == v3 )
      {
        v8 = ndisDriverObject;
        *p_NextProtocol = v3->NextProtocol;
        ObfDereferenceObject(v8);
        break;
      }
      p_NextProtocol = &v5->NextProtocol;
      v5 = v5->NextProtocol;
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v7);
    Buffer = v3->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v3->ImageName.Buffer = 0LL;
    }
    DeregEvent = v3->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v9);
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_q(39LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v3);
}
