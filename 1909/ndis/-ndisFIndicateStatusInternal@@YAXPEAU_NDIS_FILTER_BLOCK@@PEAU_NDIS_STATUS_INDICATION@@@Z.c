/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x1C0017A50 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F10 (ndisIndicateInitialStateToFilter.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0090D10 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C0C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0021A00 (ndisFIndicateOffloadChange.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00293F8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031700 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C00682B0 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C0068368 (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0073098 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C007312C (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0073180 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisFIndicateTimestampChange @ 0x1C008EA50 (ndisFIndicateTimestampChange.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  BOOL v2; // ebx
  int v3; // r15d
  unsigned int StatusCode; // r13d
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  int *StatusBuffer; // rsi
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  int v10; // eax
  bool v11; // al
  KIRQL v12; // dl
  KIRQL v13; // al
  _NDIS_FILTER_BLOCK *HigherFilter; // rbx
  unsigned int Flags; // eax
  __int64 v16; // r8
  KIRQL v17; // dl
  unsigned int v18; // eax
  char v19; // bl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // eax
  _NET_IF_MEDIA_CONNECT_STATE v21; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v22; // eax
  int v23; // ecx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  _NET_IF_MEDIA_CONNECT_STATE v25; // ecx
  char v26; // al
  char v27; // al
  bool v28; // zf
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-60h] BYREF
  unsigned int StatusBufferSize; // [rsp+24h] [rbp-5Ch]
  BOOL v31; // [rsp+28h] [rbp-58h]
  KIRQL v32; // [rsp+2Ch] [rbp-54h]
  unsigned int i; // [rsp+30h] [rbp-50h]
  int v34; // [rsp+34h] [rbp-4Ch]
  int v35; // [rsp+48h] [rbp-38h] BYREF
  int v36; // [rsp+4Ch] [rbp-34h]
  _NET_IF_MEDIA_DUPLEX_STATE v37; // [rsp+50h] [rbp-30h]
  int v38; // [rsp+54h] [rbp-2Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+58h] [rbp-28h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+60h] [rbp-20h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+68h] [rbp-18h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+6Ch] [rbp-14h]

  LOBYTE(v2) = 0;
  StatusCode = a2->StatusCode;
  LOBYTE(v3) = 0;
  Miniport = a1->Miniport;
  StatusBuffer = (int *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  v31 = v2;
  v34 = v3;
  if ( StatusCode == 1073873072 )
  {
    if ( a2->SourceHandle != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(a1->IfBlock, StatusBuffer);
  }
  if ( StatusCode == 1073873073 )
  {
    if ( a2->SourceHandle != DriverEntry )
      return;
    ndisIfUpdateL2MtuSize(a1->IfBlock, *(unsigned int *)a2->StatusBuffer);
  }
  MediaDuplexStateIndicateUp = a1->MediaDuplexStateIndicateUp;
  v36 = 0;
  v38 = 0;
  v37 = MediaDuplexStateIndicateUp;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  PauseFunctionsIndicateUp = a1->PauseFunctionsIndicateUp;
  AutoNegotiationFlagsIndicateUp = a1->AutoNegotiationFlagsIndicateUp;
  v35 = 2621824;
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  v10 = v36;
  if ( StatusCode == 1073807372 )
    v10 = 2;
  v36 = v10;
  v11 = StatusCode == 1073807372;
  if ( StatusCode == 1073807371 )
  {
    v36 = 1;
    v11 = 1;
  }
  if ( v11 )
  {
    a2->StatusCode = 1073807383;
    a2->StatusBuffer = &v35;
    StatusBuffer = &v35;
    StatusCode = 1073807383;
    a2->StatusBufferSize = 40;
    StatusBufferSize = 40;
  }
  if ( StatusCode == 1073807383 )
  {
    MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
    v21 = StatusBuffer[1];
    if ( MediaConnectStateIndicateUp != v21 )
    {
      if ( v21 == MediaConnectStateConnected )
      {
        LOBYTE(v3) = 1;
        v34 = v3;
      }
      else
      {
        v31 = MediaConnectStateIndicateUp == MediaConnectStateConnected;
      }
    }
    a1->MediaConnectStateIndicateUp = v21;
    a1->MediaDuplexStateIndicateUp = StatusBuffer[2];
    a1->XmitLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 2);
    a1->RcvLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 3);
    a1->PauseFunctionsIndicateUp = StatusBuffer[8];
    a1->AutoNegotiationFlagsIndicateUp = StatusBuffer[9];
    a1->IfBlock->MediaConnectState = v21;
    a1->IfBlock->MediaDuplexState = a1->MediaDuplexStateIndicateUp;
    a1->IfBlock->RcvLinkSpeed = a1->RcvLinkSpeedIndicateUp;
    a1->IfBlock->XmitLinkSpeed = a1->XmitLinkSpeedIndicateUp;
  }
  v12 = NewIrql[0];
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  v13 = KeAcquireSpinLockRaiseToDpc(&Miniport->Lock);
  Miniport->MiniportThread = KeGetCurrentThread();
  HigherFilter = a1->HigherFilter;
  v32 = v13;
  if ( HigherFilter )
  {
    do
    {
      if ( (unsigned __int8)ndisReferenceRefEx(&HigherFilter->PnPRef.SpinLock) )
        break;
      HigherFilter = HigherFilter->HigherFilter;
    }
    while ( HigherFilter );
    v13 = v32;
  }
  Miniport->MiniportThread = 0LL;
  KeReleaseSpinLock(&Miniport->Lock, v13);
  if ( HigherFilter )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
    while ( 1 )
    {
      Flags = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (Flags & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, NewIrql[0]);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    HigherFilter->Flags = Flags | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    if ( StatusCode == 1073807383 )
    {
      if ( !StatusBuffer )
        goto LABEL_24;
      v16 = StatusBufferSize;
      if ( StatusBufferSize < 0x28 )
        goto LABEL_24;
      MediaConnectState = HigherFilter->MediaConnectState;
      v25 = StatusBuffer[1];
      if ( MediaConnectState != v25 )
      {
        if ( v25 == MediaConnectStateConnected )
        {
          LOBYTE(v34) = 1;
        }
        else
        {
          v26 = v31;
          if ( MediaConnectState == MediaConnectStateConnected )
            v26 = 1;
          LOBYTE(v31) = v26;
        }
      }
      HigherFilter->MediaConnectState = v25;
      HigherFilter->MediaDuplexState = StatusBuffer[2];
      HigherFilter->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      HigherFilter->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
      HigherFilter->PauseFunctions = StatusBuffer[8];
      HigherFilter->AutoNegotiationFlags = StatusBuffer[9];
    }
    else
    {
      v16 = StatusBufferSize;
    }
    if ( StatusCode == 1073872902 )
    {
      v27 = ndisFIndicateOffloadChange(HigherFilter, StatusBuffer, v16);
    }
    else
    {
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(HigherFilter, a2);
      if ( StatusCode == 1073938513 )
      {
        v27 = ndisFilterIndicateWoLPatternReject(HigherFilter, a2);
      }
      else if ( StatusCode == 1073938514 )
      {
        v27 = ndisFilterIndicatePMOffloadReject(HigherFilter, a2);
      }
      else
      {
        if ( StatusCode - 1074073600 > 1 )
          goto LABEL_24;
        v27 = ndisFIndicateTimestampChange(HigherFilter, StatusCode, StatusBuffer, StatusBufferSize);
      }
    }
    if ( !v27 )
    {
LABEL_30:
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      v17 = NewIrql[0];
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v17);
      ndisDereferenceRef(&HigherFilter->PnPRef.SpinLock);
      return;
    }
LABEL_24:
    if ( HigherFilter->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(HigherFilter, a2);
    else
      ndisFIndicateStatusInternal(HigherFilter, a2);
    if ( v31 )
      ndisSwapFilterHandlersForMediaDisconnect(Miniport, (__int64)a1, HigherFilter);
    if ( (_BYTE)v34 )
      ndisRestoreFilterHandlersForMediaDisconnect((char)Miniport, (char)a1, HigherFilter);
    goto LABEL_30;
  }
  ndisMAcquireStInLockWithSpinLock(Miniport, NewIrql);
  v18 = StatusBufferSize;
  if ( StatusCode != 1073807383 || !StatusBuffer || StatusBufferSize < 0x28 )
    goto LABEL_33;
  v22 = Miniport->MediaConnectState;
  v23 = StatusBuffer[1];
  if ( v22 == v23 )
  {
    v18 = StatusBufferSize;
LABEL_33:
    v19 = v31;
    goto LABEL_34;
  }
  v28 = v22 == MediaConnectStateConnected;
  v18 = StatusBufferSize;
  if ( !v28 )
  {
    if ( v23 == 1 )
      LOBYTE(v3) = 1;
    goto LABEL_33;
  }
  v19 = 1;
LABEL_34:
  a2->Flags |= 2u;
  if ( StatusCode == 1073872902 )
  {
    if ( v18 >= 0x70
      && *(_BYTE *)StatusBuffer == 0xA7
      && *((_WORD *)StatusBuffer + 1) >= 0x70u
      && *((_BYTE *)StatusBuffer + 1) )
    {
      if ( Miniport->Offload )
        goto LABEL_35;
      ndisMAllocateMiniportOffload(Miniport);
    }
    ndisMReleaseStInLockAndSpinLock(Miniport, NewIrql[0]);
    return;
  }
LABEL_35:
  ndisIndicateStatusInternal(Miniport, (__int128 *)a2);
  if ( v19 )
    ndisSwapFilterHandlersForMediaDisconnect(Miniport, (__int64)a1, 0LL);
  if ( (_BYTE)v3 )
    ndisRestoreFilterHandlersForMediaDisconnect((char)Miniport, (char)a1, 0LL);
  Miniport->SyncFlags &= ~1u;
  Miniport->StatusProcessingThread = 0LL;
  Miniport->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
  KeLowerIrql(NewIrql[0]);
}
