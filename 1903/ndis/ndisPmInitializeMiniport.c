/*
 * XREFs of ndisPmInitializeMiniport @ 0x1C013B4EC
 * Callers:
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C002CE3C (ndisMSetIndicatePacketHandler.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C003C7CC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C003F55C (ndisMRegisterBugCheckHandler.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A118 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009F8A4 (ndisMDeregisterBugCheckHandler.c)
 *     WPP_RECORDER_SF_qZD @ 0x1C00A6398 (WPP_RECORDER_SF_qZD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B9200 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B95C8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAEE8 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C8E5C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisMInvokeInitialize @ 0x1C0108640 (ndisMInvokeInitialize.c)
 *     ndisMNotifyMachineName @ 0x1C0108884 (ndisMNotifyMachineName.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C011BF18 (ndisSelectiveSuspendInitialize.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  int v3; // edx
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int Flags; // esi
  unsigned __int8 SendFlags; // r12
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  PVOID v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v17; // edi
  int v18; // edx
  unsigned int v19; // eax
  KIRQL v20; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v22; // r14
  unsigned int v23; // ecx
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  unsigned int v25; // ecx
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v31; // rcx
  __int64 v32; // rdx
  int v33; // edi
  int v34; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _UNICODE_STRING *pAdapterInstanceName; // r9
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v37; // rcx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v41[12]; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v42[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v45[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v46[224]; // [rsp+148h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v40 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  memset(v44, 0, 12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      46,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  }
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x240) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= 0xFFFFFDBF;
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  a1->Flags &= 0x7FCFFFDFu;
  Flags = a1->Flags;
  a1->PnPFlags &= ~0x10u;
  SendFlags = a1->SendFlags;
  ndisMDeQueueWorkItem((__int64)a1, 6, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 0, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 1, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 3, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 4, 0LL, 0LL);
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->State = NdisMiniportInitializing;
  memset(v42, 0, sizeof(v42));
  memset(v46, 0, sizeof(v46));
  v8 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  v9 = v8 | 0x20000002;
  a1->Flags = v9;
  if ( MajorNdisVersion >= 6u )
  {
    v45[1] = a1->DefaultPortSendControlState;
    v45[2] = a1->DefaultPortRcvControlState;
    v45[3] = a1->DefaultPortSendAuthorizationState;
    v45[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v45[0] = 1311104;
    LODWORD(v42[0]) = 4194689;
    if ( AllocatedResources )
      v42[1] = &AllocatedResources->List[0].PartialResourceList;
    v42[2] = a1->DeviceContext;
    v42[3] = a1->AddDeviceContext;
    v42[6] = v45;
    v42[5] = a1->NetLuid.Value;
    LODWORD(v42[4]) = a1->IfIndex;
    if ( (v9 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v11 = ndisMInvokeInitialize((__int64)a1, (__int64)v42);
  }
  else
  {
    v10 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v46;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v11 = ((__int64 (__fastcall *)(_BYTE *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
            v41,
            &v40,
            v10,
            15LL,
            a1,
            a1->ConfigurationHandle);
  }
  v17 = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZD(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v14, v15, BugCheckParameter4);
  if ( v17 )
  {
    a1->State = NdisMiniportHalted;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        14,
        48,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1,
        v17);
    }
    if ( (byte_1C00E8043 & 2) != 0 )
      McTemplateK0jqxqqq(
        v13,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v17,
        1,
        0);
  }
  else
  {
    if ( !a1->GeneralAttributes )
    {
      v17 = -1073741823;
LABEL_22:
      ndisMDeregisterBugCheckHandler((__int64)a1);
      if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
      {
        pAdapterInstanceName = a1->pAdapterInstanceName;
        if ( a1->Interrupt )
        {
          DbgPrintEx(
            0x78u,
            0,
            " ***NDIS*** : Miniport %Z - %s\n",
            pAdapterInstanceName,
            "Init failed without deregistering interrupt");
          KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
        }
        if ( a1->InterruptEx )
        {
          DbgPrintEx(
            0x78u,
            0,
            " ***NDIS*** : Miniport %Z - %s\n",
            pAdapterInstanceName,
            "Init failed without deregistering interrupt");
          KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
        }
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          pAdapterInstanceName,
          "Init failed without deregistering timer");
        KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
      }
      v19 = a1->Flags;
      a1->PnPFlags |= 0x4000u;
      a1->Flags = v19 & 0x7FFFFFFE | 0x80000000;
      goto LABEL_70;
    }
    a1->State = NdisMiniportPaused;
    ndisMRegisterBugCheckHandler((char *)a1);
    v20 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    CurrentThread = KeGetCurrentThread();
    a1->PnPFlags &= 0xFFFDBFFB;
    v22 = v20;
    a1->MiniportThread = CurrentThread;
    LODWORD(CurrentThread) = a1->Flags & 0x20002040;
    a1->SendFlags = SendFlags;
    v23 = Flags & 0xDFFFDFFD | (unsigned int)CurrentThread;
    a1->Flags = v23;
    if ( MajorNdisVersion < 6u )
    {
      Interrupt = a1->Interrupt;
      if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
        v25 = v23 & 0xFFFFFFFE;
      else
        v25 = v23 | 1;
      a1->Flags = v25;
      a1->GeneralAttributes->MediaConnectState = 2 - ((v25 & 0x20000000) != 0);
      a1->GeneralAttributes->MediaDuplexState = MediaDuplexStateUnknown;
      a1->GeneralAttributes->MaxXmitLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->XmitLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->MaxRcvLinkSpeed = 0x40000000LL;
      a1->GeneralAttributes->RcvLinkSpeed = 0x40000000LL;
    }
    LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
    if ( (LinkStateIndicationFlags & 8) == 0 )
      a1->MiniportMediaConnectState = a1->GeneralAttributes->MediaConnectState;
    if ( (LinkStateIndicationFlags & 0x10) == 0 )
    {
      GeneralAttributes = a1->GeneralAttributes;
      a1->MiniportRcvLinkSpeed = GeneralAttributes->RcvLinkSpeed;
      a1->MiniportXmitLinkSpeed = GeneralAttributes->XmitLinkSpeed;
      a1->MiniportMediaDuplexState = GeneralAttributes->MediaDuplexState;
      a1->MiniportAutoNegotiationFlags = GeneralAttributes->AutoNegotiationFlags;
    }
    if ( (LinkStateIndicationFlags & 1) == 0 )
    {
      MediaConnectState = a1->GeneralAttributes->MediaConnectState;
      v29 = a1->Flags;
      a1->MediaConnectState = MediaConnectState;
      if ( MediaConnectState == MediaConnectStateConnected )
        v30 = v29 | 0x20000000;
      else
        v30 = v29 & 0xDFFFFFFF;
      a1->Flags = v30;
    }
    if ( (LinkStateIndicationFlags & 2) == 0 )
    {
      v31 = a1->GeneralAttributes;
      a1->RcvLinkSpeed = v31->RcvLinkSpeed;
      a1->XmitLinkSpeed = v31->XmitLinkSpeed;
    }
    if ( (LinkStateIndicationFlags & 4) == 0 )
      a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
    v33 = (unsigned __int8)ndisIfSetInterfaceState((__int64)a1, 0, v22);
    if ( (a1->Flags & 0x20000000) != 0 )
      ndisMSetIndicatePacketHandler((__int64)a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v32,
        14,
        49,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    ndisSetWakeUpTimer((__int64)a1, v32);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v22);
    ndisMDoOidRequest(a1);
    ndisMNotifyMachineName((__int64)a1);
    if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v34,
        1,
        50,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( v33 && ndisMReferenceIfBlock((__int64)a1, 0xBu) )
    {
      IfBlock = a1->IfBlock;
      *(_QWORD *)((char *)v44 + 4) = 0LL;
      LODWORD(v44[0]) = 786816;
      HIDWORD(v44[0]) = IfBlock->ifOperStatus;
      LODWORD(v44[1]) = IfBlock->ifOperStatusFlags;
      StatusIndication.StatusBufferSize = 12;
      StatusIndication.StatusBuffer = v44;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, MPIFREF_PMINIT);
    }
    ndisUpdatePMCurrentCapabilities((__int64)a1);
    v17 = 0;
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  }
  if ( v17 )
    goto LABEL_22;
  ndisLogMiniportEvent((__int64)a1, 0x37u);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize((__int64)a1);
    if ( a1->SelectiveSuspend )
    {
      ndisSelectiveSuspendClearStop((__int64)a1, 9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendStop(a1, 7);
    }
  }
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_70:
  v37 = a1->GeneralAttributes;
  if ( v37 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v37, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      14,
      51,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1,
      v17);
  }
  return v17;
}
