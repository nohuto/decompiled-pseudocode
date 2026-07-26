/*
 * XREFs of ndisDereferenceProtocol @ 0x1C00280E0
 * Callers:
 *     ?ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C007C10C (-ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C0092F80 (NdisReEnumerateProtocolBindings.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01052A0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0105388 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C010A30C (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C01217FC (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 *     NdisDeregisterProtocol @ 0x1C0138860 (NdisDeregisterProtocol.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     WPP_RECORDER_SF_Dql @ 0x1C002818C (WPP_RECORDER_SF_Dql_ea_1C002818C.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C009228C (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3, int a4)
{
  int v6; // edx
  KIRQL v7; // al
  struct _NDIS_PROTOCOL_BLOCK *v8; // rcx
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rdx
  KIRQL v10; // di
  PVOID v11; // rcx
  unsigned int v12; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), a3, a3, a4);
  if ( ndisDereferenceRef(&this->Ref.SpinLock, a3) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    v8 = ndisProtocolList;
    p_NextProtocol = &ndisProtocolList;
    v10 = v7;
    while ( v8 )
    {
      if ( v8 == this )
      {
        v11 = ndisDriverObject;
        *p_NextProtocol = this->NextProtocol;
        ObfDereferenceObject(v11);
        break;
      }
      p_NextProtocol = &v8->NextProtocol;
      v8 = v8->NextProtocol;
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v10);
    Buffer = this->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      this->ImageName.Buffer = 0LL;
    }
    DeregEvent = this->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(this, v12);
    ExFreePoolWithTag(this, 0);
    LOBYTE(this) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      5,
      39,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)this);
  }
}
