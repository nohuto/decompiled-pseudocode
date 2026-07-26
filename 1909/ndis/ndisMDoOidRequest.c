/*
 * XREFs of ndisMDoOidRequest @ 0x1C0006D10
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C0016AC0 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C0009CDC (WPP_RECORDER_SF_Dqqd.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxptdq @ 0x1C0068C58 (McTemplateK0jqxptdq.c)
 *     McTemplateK0jqxqdq @ 0x1C0068D18 (McTemplateK0jqxqdq.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C006A314 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C006B48C (ndisMOidRequestToRequest.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B66F4 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6D1C (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C00B82B0 (ndisClearBusy.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // rdi
  _NDIS_OID_REQUEST *PendingOidRequest; // rbp
  _DWORD *v4; // r15
  char v5; // bl
  KIRQL v6; // r8
  unsigned int WSyncFlags; // edx
  unsigned int PnPFlags; // eax
  char *p_OidRequestList; // rcx
  __int64 v10; // rax
  unsigned int Oid; // r13d
  UCHAR Type; // bl
  char v13; // si
  char v14; // di
  int v15; // edx
  unsigned int Timeout; // eax
  unsigned int CheckForHangSeconds; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // eax
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  __int64 (__fastcall *v25)(_QWORD *); // rax
  KIRQL v26; // al
  bool v27; // zf
  KIRQL v28; // si
  int v29; // ebx
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int v31; // ecx
  int v32; // ecx
  int v33; // edx
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int Flags; // eax
  int v36; // ecx
  _DEVICE_POWER_STATE v37; // edi
  KIRQL i; // al
  int v39; // [rsp+20h] [rbp-B8h]
  _QWORD v40[6]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v41[11]; // [rsp+80h] [rbp-58h] BYREF
  struct _KEVENT *v42; // [rsp+E0h] [rbp+8h]

  AllRequestsCompletedEvent = 0LL;
  v42 = 0LL;
  while ( 1 )
  {
    PendingOidRequest = 0LL;
    v4 = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      p_OidRequestList = (char *)&a1->OidRequestList;
      if ( *(char **)p_OidRequestList == p_OidRequestList || (PnPFlags & 0x20000) != 0 )
      {
        if ( (PnPFlags & 0x20000) != 0 )
        {
          v5 = 1;
          if ( a1->AllRequestsCompletedEvent )
          {
            AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
            v42 = AllRequestsCompletedEvent;
            a1->AllRequestsCompletedEvent = 0LL;
          }
        }
      }
      else
      {
        a1->WSyncFlags = WSyncFlags | 1;
        v4 = *(_DWORD **)p_OidRequestList;
        if ( *(char **)(*(_QWORD *)p_OidRequestList + 8LL) != p_OidRequestList
          || (v10 = *(_QWORD *)v4, *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)p_OidRequestList = v10;
        PendingOidRequest = (_NDIS_OID_REQUEST *)(v4 - 18);
        *(_QWORD *)(v10 + 8) = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)(v4 - 18);
      }
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    if ( v5 )
      ndisCancelOidRequestOnMiniport((char)a1);
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      v42 = 0LL;
    }
    if ( !v4 )
      break;
    Oid = PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
    Type = a1->Header.Type;
    v13 = 0;
    v14 = 0;
    memset(v40, 0, sizeof(v40));
    if ( Type == 17 )
    {
      Timeout = PendingOidRequest->Timeout;
      if ( Timeout < 0x3C )
      {
        CheckForHangSeconds = a1->CheckForHangSeconds;
        if ( CheckForHangSeconds )
        {
          v18 = CheckForHangSeconds + Timeout - 1;
          if ( CheckForHangSeconds == 2 )
          {
            v19 = v18 >> 1;
          }
          else
          {
            v15 = v18 % CheckForHangSeconds;
            v19 = v18 / CheckForHangSeconds;
          }
          a1->CFHangXTicks = v19;
        }
      }
    }
    *(_DWORD *)&PendingOidRequest->NdisReserved[16] &= ~4u;
    v20 = 0;
    v21 = 73;
    if ( a1->Header.Type == 17 )
      v22 = a1;
    else
      v22 = *(struct _NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    if ( !PendingOidRequest->PortNumber || (LODWORD(v22) = v22->InfoFlags, ((unsigned __int16)v22 & 0x200) == 0) )
    {
      v23 = PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
      v24 = 146;
      while ( v21 >= v20 )
      {
        v15 = 3 * v21;
        LODWORD(v22) = *((_DWORD *)&unk_1C00CA300 + 6 * v21);
        if ( (unsigned int)v22 > v23 )
        {
          if ( !v21 )
            break;
          v24 = v21 - 1;
        }
        else
        {
          if ( (_DWORD)v22 == v23 )
          {
            *(_DWORD *)&PendingOidRequest->NdisReserved[20] = v21;
            LODWORD(v22) = *(_DWORD *)&PendingOidRequest->NdisReserved[16];
            v40[0] = 0LL;
            v40[2] = 0LL;
            HIDWORD(v40[5]) = 0;
            *(_DWORD *)&PendingOidRequest->NdisReserved[16] = (unsigned int)v22 | 4;
            if ( Type == 17 )
            {
              v40[0] = a1;
              v40[2] = 0LL;
            }
            else if ( Type == 5 )
            {
              v40[2] = a1;
              v40[0] = 0LL;
            }
            v40[4] = PendingOidRequest;
            if ( ((unsigned __int16)v22 & 0x220) != 0 )
              v40[3] = *(_QWORD *)&PendingOidRequest->NdisReserved[32];
            else
              v40[3] = 0LL;
            if ( ((unsigned __int8)v22 & 0x40) != 0 )
              v40[1] = *(_QWORD *)&PendingOidRequest->NdisReserved[32];
            else
              v40[1] = 0LL;
            LODWORD(v40[5]) = 0;
            if ( ((unsigned int)v22 & 0x840080) != 0 )
            {
              v14 = 0;
            }
            else
            {
              LODWORD(v22) = 3 * *(_DWORD *)&PendingOidRequest->NdisReserved[20];
              v25 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)&unk_1C00CA300
                                                      + 3 * *(unsigned int *)&PendingOidRequest->NdisReserved[20]
                                                      + 1);
              if ( v25 )
              {
                v14 = v25(v40);
                if ( v14 == 1 )
                {
                  ndisOidRequestComplete(v40);
                  v13 = 3;
                }
                else
                {
                  v13 = v40[5];
                }
              }
            }
            break;
          }
          v20 = v21 + 1;
        }
        v21 = v20 + ((v24 - v20 + 1) >> 1);
        if ( v21 > v24 )
          break;
      }
    }
    if ( (byte_1C00E8081 & 0x40) != 0 )
      McTemplateK0jqxptdq(
        (_DWORD)v22,
        v15,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)PendingOidRequest,
        v14,
        v13,
        Oid);
    if ( v14 == 1 )
    {
      AllRequestsCompletedEvent = v42;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          v20,
          22,
          v39,
          Oid,
          (char)PendingOidRequest,
          (char)a1,
          v13);
    }
    else
    {
      v26 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v27 = (a1->Flags & 0x80000) == 0;
      v28 = v26;
      a1->MiniportThread = KeGetCurrentThread();
      v29 = 0;
      if ( !v27 )
      {
        v29 = -1073676275;
        goto LABEL_63;
      }
      RequestType = PendingOidRequest->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v29 = -2147483633;
        goto LABEL_63;
      }
      v31 = a1->PnPFlags;
      if ( (v31 & 0x100) != 0 )
      {
        v29 = -1073676280;
        goto LABEL_63;
      }
      v32 = v31 & 0x20000;
      if ( !v32
        && ((unsigned int)(a1->DriverPowerState - 2) > 2 || PendingOidRequest->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = PendingOidRequest;
        if ( PendingOidRequest->DATA.QUERY_INFORMATION.Oid == -50265855
          && PendingOidRequest->RequestType == NdisRequestSetInformation
          && PendingOidRequest->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v37 = *(_DWORD *)PendingOidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
          if ( (unsigned int)(v37 - 1) <= 3 )
          {
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v26);
            for ( i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
                  a1->PendingReturnNBLCount;
                  i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock) )
            {
              KeReleaseSpinLock(&a1->PowerStateLock, i);
              NdisMSleep(0x32u);
            }
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v37;
            KeReleaseSpinLock(&a1->PowerStateLock, v28);
            v28 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
          }
        }
        v33 = v4[4];
        if ( (a1->Flags & 0x20000) != 0 )
          v33 = v4[4] | 0x2000;
        p_Lock = &a1->Lock;
        v4[4] = v33 | 0x10000;
        a1->MiniportThread = 0LL;
        if ( a1->MajorNdisVersion < 6u )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v29 = ndisMOidRequestToRequest((char)a1, (char)PendingOidRequest);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v28);
          Flags = a1->Flags;
          if ( (Flags & 0x20000) != 0 )
          {
            v29 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, PendingOidRequest);
          }
          else
          {
            if ( a1->SelectiveSuspend )
            {
              if ( (Flags & 0x80u) == 0 )
                ndisWdmSetBusySync(a1, NdisBusyOid, Oid);
              else
                ndisWdfSetBusySync(a1, NdisBusyOid, Oid);
            }
            v29 = ndisMInvokeOidRequest((char)a1);
            if ( v29 != 259 && a1->SelectiveSuspend )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v28 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        }
        --a1->RequestCount;
        if ( v29 != 259 )
        {
          PendingOidRequest = a1->PendingOidRequest;
          a1->PendingOidRequest = 0LL;
        }
      }
      else
      {
        if ( (RequestType & 0xFFFFFFFD) == 0 )
        {
          PendingOidRequest->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_111:
          v29 = -1073741823;
          goto LABEL_63;
        }
        if ( RequestType != NdisRequestSetInformation )
        {
          if ( RequestType != NdisRequestMethod )
            goto LABEL_63;
          PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead = 0;
          goto LABEL_111;
        }
        PendingOidRequest->DATA.QUERY_INFORMATION.BytesWritten = PendingOidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
        v29 = -1071448017;
        if ( v32 )
          v29 = -1073741823;
      }
LABEL_63:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v28);
      AllRequestsCompletedEvent = v42;
      if ( v29 != 259 && PendingOidRequest )
      {
        memset(v41, 0, 0x30uLL);
        if ( (byte_1C00E8081 & 0x40) != 0 )
          McTemplateK0jqxqdq(
            v36,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            PendingOidRequest->DATA.QUERY_INFORMATION.Oid,
            v29);
        v41[4] = PendingOidRequest;
        LODWORD(v41[5]) = v29;
        v41[0] = a1;
        ndisOidRequestComplete(v41);
      }
    }
  }
}
