/*
 * XREFs of ndisMDoOidRequest @ 0x1C000E0B0
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C0020D80 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000D970 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     McTemplateK0jqxptdq @ 0x1C0043430 (McTemplateK0jqxptdq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qqDDD @ 0x1C0043EE8 (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C0044464 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DE0 (ndisMOidRequestToRequest.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C007316C (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C0073550 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 *     ndisMInvokeOidRequest @ 0x1C00B7B80 (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // r15
  _NDIS_OID_REQUEST *p_Blink; // r14
  _LIST_ENTRY *Flink; // rdi
  char v5; // si
  KIRQL v6; // bp
  unsigned int WSyncFlags; // r8d
  _LIST_ENTRY *p_OidRequestList; // rdx
  _LIST_ENTRY *v9; // rax
  __int64 v10; // r8
  unsigned int Oid; // r13d
  unsigned __int8 v12; // al
  int v13; // edx
  int v14; // ecx
  char v15; // si
  char v16; // bp
  KIRQL v17; // al
  unsigned int v18; // esi
  bool v19; // zf
  KIRQL v20; // r15
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v23; // ecx
  int v24; // ecx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  _DEVICE_POWER_STATE v30; // ebp
  KIRQL i; // al
  __int64 v32; // [rsp+20h] [rbp-98h]
  _QWORD v33[13]; // [rsp+50h] [rbp-68h] BYREF
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  struct _KEVENT *v35; // [rsp+C8h] [rbp+10h]

  AllRequestsCompletedEvent = 0LL;
  v35 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(25LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
  while ( 1 )
  {
    v34 = -1073741823;
    p_Blink = 0LL;
    Flink = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2295626;
    if ( (WSyncFlags & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_q(26LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
    }
    else
    {
      p_OidRequestList = &a1->OidRequestList;
      if ( p_OidRequestList->Flink == p_OidRequestList )
      {
        if ( (a1->PnPFlags & 0x20000) == 0 )
          goto LABEL_9;
      }
      else if ( (a1->PnPFlags & 0x20000) == 0 )
      {
        a1->WSyncFlags = WSyncFlags | 1;
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList || (v9 = Flink->Flink, Flink->Flink->Blink != Flink) )
          __fastfail(3u);
        p_OidRequestList->Flink = v9;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        v9->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        goto LABEL_9;
      }
      v5 = 1;
      if ( a1->AllRequestsCompletedEvent )
      {
        AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
        v35 = AllRequestsCompletedEvent;
        a1->AllRequestsCompletedEvent = 0LL;
      }
    }
LABEL_9:
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
    if ( v5 )
    {
      LOBYTE(v10) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v10);
    }
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      AllRequestsCompletedEvent = 0LL;
      v35 = 0LL;
    }
    if ( !Flink )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qqd(
        27LL,
        &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids,
        a1,
        p_Blink,
        p_Blink->DATA.QUERY_INFORMATION.Oid);
    v12 = ndisPreProcessOid((__int64)a1, (__int64)p_Blink, a1->Header.Type, (unsigned int *)&v34);
    v15 = v12;
    v16 = v34;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
    {
      LODWORD(v32) = Oid;
      WPP_SF_qqDDD(28LL, v12, a1, p_Blink, v32, v12, v34);
    }
    if ( (byte_1C00A2081 & 0x40) != 0 )
      McTemplateK0jqxptdq(
        v14,
        v13,
        (_DWORD)a1 + 4040,
        (_DWORD)a1 + 4040,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v15,
        v16,
        Oid);
    if ( v15 != 1 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v18 = 0;
      v19 = (a1->Flags & 0x80000) == 0;
      v20 = v17;
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2295751;
      if ( !v19 )
      {
        v18 = -1073676275;
        goto LABEL_43;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v18 = -2147483633;
        goto LABEL_43;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v18 = -1073676280;
        goto LABEL_43;
      }
      v23 = PnPFlags & 0x20000;
      if ( v23 || (unsigned int)(a1->DriverPowerState - 2) <= 2 && p_Blink->DATA.QUERY_INFORMATION.Oid != -50265855 )
      {
        if ( (RequestType & 0xFFFFFFFD) != 0 )
        {
          if ( RequestType == NdisRequestSetInformation )
          {
            v18 = -1071448017;
            if ( v23 )
              v18 = -1073741823;
            p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
            goto LABEL_43;
          }
          if ( RequestType != NdisRequestMethod )
            goto LABEL_43;
          p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
        }
        else
        {
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
        }
        v18 = -1073741823;
        goto LABEL_43;
      }
      ++a1->RequestCount;
      a1->PendingOidRequest = p_Blink;
      if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
        && p_Blink->RequestType == NdisRequestSetInformation
        && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
      {
        v30 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
        if ( (unsigned int)(v30 - 1) <= 3 )
        {
          a1->MiniportThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLock(&a1->Lock, v17);
          for ( i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
                a1->PendingReturnNBLCount;
                i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock) )
          {
            KeReleaseSpinLock(&a1->PowerStateLock, i);
            NdisMSleep(0x32u);
          }
          a1->PrevDriverPowerState = a1->DriverPowerState;
          a1->DriverPowerState = v30;
          KeReleaseSpinLock(&a1->PowerStateLock, v20);
          v20 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
          a1->LockDbg = 2295852;
        }
      }
      v24 = (int)Flink[1].Flink;
      if ( (a1->Flags & 0x20000) != 0 )
      {
        v24 |= 0x2000u;
        LODWORD(Flink[1].Flink) = v24;
      }
      LODWORD(Flink[1].Flink) = v24 | 0x10000;
      p_Lock = &a1->Lock;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      if ( a1->MajorNdisVersion < 6u )
      {
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        v34 = ndisMOidRequestToRequest(a1, p_Blink);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        v27 = 2295896;
      }
      else
      {
        KeReleaseSpinLock(p_Lock, v20);
        Flags = a1->Flags;
        if ( (Flags & 0x20000) != 0 )
        {
          v34 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
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
          v34 = ndisMInvokeOidRequest(a1, p_Blink);
          if ( v34 != 259 && a1->SelectiveSuspend )
            ndisClearBusy(a1, 1LL, 33LL);
        }
        v20 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        v27 = 2295885;
      }
      a1->LockDbg = v27;
      --a1->RequestCount;
      v18 = v34;
      if ( v34 != 259 )
      {
        p_Blink = a1->PendingOidRequest;
        a1->PendingOidRequest = 0LL;
      }
LABEL_43:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v20);
      AllRequestsCompletedEvent = v35;
      if ( v18 != 259 && p_Blink )
      {
        memset(v33, 0, 0x30uLL);
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_qqDD(
            29LL,
            &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids,
            a1,
            p_Blink,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v18);
        if ( (byte_1C00A2081 & 0x40) != 0 )
          McTemplateK0jqxqdq(
            v29,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4040,
            (_DWORD)a1 + 4040,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v18,
            121);
        v33[4] = p_Blink;
        LODWORD(v33[5]) = v18;
        v33[0] = a1;
        ndisOidRequestComplete((__int64)v33, v28);
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(30LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
}
