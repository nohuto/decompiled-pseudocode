/*
 * XREFs of ndisMOpenAdapter @ 0x1C012C0CC
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F2C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FA0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     XNoteFilterOpenAdapter @ 0x1C0026E64 (XNoteFilterOpenAdapter.c)
 *     ethAllocateOpenMulticastBuffer @ 0x1C0026EE0 (ethAllocateOpenMulticastBuffer.c)
 *     WPP_RECORDER_SF_qqZddZ @ 0x1C002767C (WPP_RECORDER_SF_qqZddZ.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     XRemoveBindingFromLists @ 0x1C00A3064 (XRemoveBindingFromLists.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BD40 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisQueueOpenOnProtocol @ 0x1C012BE40 (ndisQueueOpenOnProtocol.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0136A1C (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C0138AA8 (ndisDeQueueOpenOnProtocol.c)
 *     ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138DC8 (-ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2, __int64 a3)
{
  struct _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  _QWORD *v4; // rbp
  __int64 *v5; // r15
  char v6; // r13
  char v8; // r12
  struct _NDIS_OPEN_BLOCK *v9; // rbx
  int v11; // edx
  void (__fastcall *RequestCompleteHandler)(void *, _NDIS_REQUEST *, int); // rcx
  void (__fastcall *v13)(void *, _NDIS_OID_REQUEST *, int); // rax
  __int64 v14; // rax
  void (__fastcall *v15)(void *, void *); // rcx
  unsigned __int8 MajorNdisVersion; // al
  bool v17; // cl
  __int64 v18; // r9
  int v19; // eax
  int OpenMulticastBuffer; // eax
  int v21; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // rax
  void (__fastcall *v24)(void *, void *); // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *v25; // rax
  int v26; // [rsp+20h] [rbp-68h]
  char v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  char v29; // [rsp+90h] [rbp+8h]

  ProtocolHandle = a2->ProtocolHandle;
  v4 = 0LL;
  v5 = 0LL;
  v29 = 0;
  v6 = 0;
  v8 = 0;
  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      48,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)ProtocolHandle,
      a3,
      v27);
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(a3) )
  {
    *a1 = -1073676286;
    goto LABEL_29;
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    v4 = *(_QWORD **)(a3 + 1856);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6D66444Eu);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *a1 = -1073741670;
        goto LABEL_67;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a3 + 1856) = v4;
      v29 = 1;
    }
    v9->MacHandle = v4;
  }
  v9->MiniportAdapterContext = *(void **)(a3 + 24);
  v9->CurrentLookahead = *(unsigned __int16 *)(a3 + 592);
  KeInitializeSpinLock(&v9->SpinLock);
  ndisMReferenceOpen((__int64)v9, 1u);
  if ( *(_BYTE *)(a3 + 32) < 6u )
  {
    v9->WSendHandler = *(int (__fastcall **)(void *, _NDIS_PACKET *, unsigned int))(*(_QWORD *)(a3 + 3760) + 200LL);
    v9->WSendPacketsHandler = *(void (__fastcall **)(void *, _NDIS_PACKET **, unsigned int))(a3 + 1808);
    v9->WTransferDataHandler = *(int (__fastcall **)(_NDIS_PACKET *, unsigned int *, void *, void *, unsigned int, unsigned int))(*(_QWORD *)(a3 + 3760) + 216LL);
  }
  v9->ProtocolMajorVersion = ProtocolHandle->MajorNdisVersion;
  if ( v9->ProtocolHandle->MajorNdisVersion < 6u )
  {
    v9->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendPacketCompleteToOpen;
    v9->ProtSendCompleteHandler = ProtocolHandle->SendCompleteHandler;
    v9->TransferDataCompleteHandler = ProtocolHandle->TransferDataCompleteHandler;
    v9->ReceiveHandler = ProtocolHandle->ReceiveHandler;
    v9->ReceiveCompleteHandler = ProtocolHandle->ReceiveCompleteHandler;
    v9->ResetCompleteHandler = ProtocolHandle->ResetCompleteHandler;
    v9->ReceivePacketHandler = ProtocolHandle->ReceivePacketHandler;
    v13 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisCompleteOidRequestToRequest;
    RequestCompleteHandler = ProtocolHandle->RequestCompleteHandler;
  }
  else
  {
    RequestCompleteHandler = 0LL;
    v9->ReceiveCompleteHandler = (void (__fastcall *)(void *))ndisFakeMiniportCancelSendPackets;
    v13 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisInvokeOidRequestComplete;
  }
  v9->RequestCompleteHandler = RequestCompleteHandler;
  v9->OidRequestCompleteHandler = v13;
  v9->StatusHandler = ProtocolHandle->StatusHandler;
  v9->StatusCompleteHandler = ProtocolHandle->StatusCompleteHandler;
  v9->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
  v9->SendCompleteNdisPacketContext = v9->ProtocolBindingContext;
  v9->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
  v9->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
  v9->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
  v9->TransferDataHandler = (int (__fastcall *)(void *, void *, unsigned int, unsigned int, _NDIS_PACKET *, unsigned int *))ndisMTransferData;
  v9->BindingHandle = v9;
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
      v9->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  else
  {
    v9->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMSend;
  }
  v9->SendPacketsHandler = *(void (__fastcall **)(void *, _NDIS_PACKET **, unsigned int))(a3 + 624);
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    {
LABEL_43:
      v23 = *(_QWORD *)(a3 + 3760);
      if ( *(_BYTE *)(a3 + 32) >= 6u )
      {
        v9->MiniportCoOidRequestHandler = *(int (__fastcall **)(void *, void *, _NDIS_OID_REQUEST *))(v23 + 552);
        v9->MiniportCoCreateVcHandler = *(int (__fastcall **)(void *, void *, void **))(*(_QWORD *)(a3 + 3760) + 504LL);
        v24 = *(void (__fastcall **)(void *, void *))(*(_QWORD *)(a3 + 3760) + 200LL);
      }
      else
      {
        v9->MiniportCoRequestHandler = *(int (__fastcall **)(void *, void *, _NDIS_REQUEST *))(v23 + 288);
        v9->MiniportCoCreateVcHandler = *(int (__fastcall **)(void *, void *, void **))(*(_QWORD *)(a3 + 3760) + 248LL);
        v24 = *(void (__fastcall **)(void *, void *))(*(_QWORD *)(a3 + 3760) + 296LL);
      }
      v9->CancelSendPacketsHandler = v24;
      v9->ActiveVcHead.Blink = &v9->ActiveVcHead;
      v9->ActiveVcHead.Flink = &v9->ActiveVcHead;
      v9->InactiveVcHead.Blink = &v9->InactiveVcHead;
      v9->InactiveVcHead.Flink = &v9->InactiveVcHead;
      if ( !v9->SendHandler && !v9->SendPacketsHandler )
      {
        v9->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))NdisOffloadTcpForward;
        v9->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMRejectSendPackets;
      }
      goto LABEL_13;
    }
    v9->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    goto LABEL_43;
LABEL_13:
  v14 = *(_QWORD *)(a3 + 3760);
  if ( *(_BYTE *)(a3 + 32) < 6u )
    v15 = *(void (__fastcall **)(void *, void *))(v14 + 296);
  else
    v15 = *(void (__fastcall **)(void *, void *))(v14 + 200);
  v9->CancelSendPacketsHandler = v15;
  ndisSetupNdis6OpenHandlers(v9, ProtocolHandle, (struct _NDIS_MINIPORT_BLOCK *)a3);
  MajorNdisVersion = v9->ProtocolHandle->MajorNdisVersion;
  v17 = MajorNdisVersion < 6u && *(_BYTE *)(a3 + 32) >= 6u;
  if ( MajorNdisVersion < 6u && *(_BYTE *)(a3 + 1993) || v17 )
  {
    ndisSetOpenToTranslationMode(v9);
    v25 = (_NDIS_STATUS_UNBIND_WORKITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    v9->StatusUnbindWorkItem = v25;
    if ( !v25 )
    {
      v21 = -1073676281;
      *a1 = -1073676281;
      goto LABEL_28;
    }
    v25->WorkItem.Context = (void *)a3;
    v9->StatusUnbindWorkItem->WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedStatusUnbindAdapter;
  }
  v9->SavedSendHandler = v9->SendHandler;
  v9->SavedSendPacketsHandler = v9->SendPacketsHandler;
  v9->SavedCancelSendPacketsHandler = v9->CancelSendPacketsHandler;
  if ( ndisQueueOpenOnMiniport((struct _NDIS_MINIPORT_BLOCK *)a3, v9) )
  {
    v6 = 1;
    if ( !ndisQueueOpenOnProtocol((__int64)v9, (__int64)ProtocolHandle) )
    {
      *a1 = -1073676281;
LABEL_63:
      ndisDeQueueOpenOnMiniport((char)v9, a3);
LABEL_64:
      if ( v8 )
        ndisDeQueueOpenOnProtocol((char)v9, (char)ProtocolHandle);
      goto LABEL_67;
    }
    v5 = *(__int64 **)(a3 + 400);
    v8 = 1;
    v19 = *(_DWORD *)(a3 + 464);
    if ( v5 )
    {
      XNoteFilterOpenAdapter(*(struct _X_FILTER **)(a3 + 400), v9);
      v19 = *(_DWORD *)(a3 + 464);
    }
    if ( !v19 )
    {
      OpenMulticastBuffer = ethAllocateOpenMulticastBuffer((__int64)v5, (__int64)v9);
      *a1 = OpenMulticastBuffer;
      if ( OpenMulticastBuffer )
      {
        *a1 = -1073676281;
LABEL_60:
        if ( v5 )
          XRemoveBindingFromLists(v5, (__int64)v9);
        goto LABEL_63;
      }
    }
    if ( ProtocolHandle->MajorNdisVersion < 6u && v29 )
    {
      v4[10] = ndisMTransferData;
      v4[11] = ndisMReset;
      v4[12] = v9->RequestHandler;
      v4[9] = v9->SendHandler;
    }
    *a1 = 0;
    v21 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqZddZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        ProtocolHandle->MajorNdisVersion,
        (__int64)&ProtocolHandle->Name,
        v18,
        v26,
        a3,
        (char)v9,
        &ProtocolHandle->Name.Length,
        ProtocolHandle->MajorNdisVersion,
        ProtocolHandle->MinorNdisVersion,
        *(unsigned __int16 **)(a3 + 3856));
      v21 = *a1;
    }
LABEL_28:
    v8 = v6;
    if ( !v21 )
      goto LABEL_29;
    if ( !v6 )
      goto LABEL_64;
    goto LABEL_60;
  }
  *a1 = -1073676281;
LABEL_67:
  ndisDereferenceMiniport(a3, 0x2Eu);
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = *a1;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      6u,
      0x32u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)ProtocolHandle,
      a3,
      (char)v9,
      v28);
  }
}
