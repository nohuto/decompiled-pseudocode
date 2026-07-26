/*
 * XREFs of ndisPnPRemoveDevice @ 0x1C013A804
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D330 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPStopDevice @ 0x1C009FB80 (ndisPnPStopDevice.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00A50AC (ndisPnPRemoveDeviceEx.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisResetEvent @ 0x1C00114E0 (NdisResetEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     ndisReferenceDriver @ 0x1C003F604 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F0B4 (WPP_RECORDER_SF_ql_ea_1C005F0B4.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ndisMHaltMiniport @ 0x1C0081E68 (ndisMHaltMiniport.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C00994C0 (ndisIMDeleteIfStackEntry.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0099EF0 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1844 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovTeardownVf @ 0x1C00B1D6C (ndisIovTeardownVf.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C0118868 (ndisPnPCompleteRemoveDevice.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  char v3; // r12
  __int64 DriverHandle; // rdi
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rsi
  const void **pAdapterInstanceName; // rdx
  PVOID v9; // rsi
  unsigned __int16 *v10; // rcx
  NTSTATUS v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  char v14; // r14
  struct _NDIS_MINIPORT_BLOCK *v15; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  int v17; // edx
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  PVOID WnodeEventItem[2]; // [rsp+58h] [rbp-B0h] BYREF
  char v20[160]; // [rsp+68h] [rbp-A0h] BYREF
  char v21; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Bu,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  DriverHandle = (__int64)a1->DriverHandle;
  if ( DriverHandle )
  {
    if ( (*(_BYTE *)(DriverHandle + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(DriverHandle + 416), Executive, 0, 0, 0LL);
      v3 = 1;
      *(_QWORD *)(DriverHandle + 472) = KeGetCurrentThread();
    }
    ndisCancelWaitWake((__int64)a1);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DriverHandle + 392));
    for ( i = *(struct _NDIS_MINIPORT_BLOCK **)(DriverHandle + 16); i && i != a1; i = i->NextMiniport )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)(DriverHandle + 392), v6);
    if ( i != a1 || a1->Ref.Closing == 1 )
    {
      a1->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle, 1u);
      NdisResetEvent(&a1->OpenReadyEvent);
      pAdapterInstanceName = (const void **)a1->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        ndisSetupWmiNode(
          (__int64)a1,
          pAdapterInstanceName,
          a1->MiniportName.Length + 2,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          WnodeEventItem);
        v9 = WnodeEventItem[0];
        if ( WnodeEventItem[0] )
        {
          v10 = (unsigned __int16 *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
          *v10 = a1->MiniportName.Length;
          memmove(v10 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v11 = IoWMIWriteEvent(v9);
          v14 = v11;
          if ( v11 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v12,
                18,
                92,
                (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
            }
            if ( (byte_1C00E8041 & 0x10) != 0 )
              McTemplateK0jqxq(
                v13,
                &IndicateAdapterRemovalFailed,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                v14);
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
      if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_RemovingMiniport) )
      {
        memset(v20, 0, sizeof(v20));
        if ( (unsigned __int8)byte_1C00E673B >= 4u )
        {
          ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v20);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v15,
              0x1Cu,
              0x5Du,
              (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
              *(unsigned __int16 **)&v20[8],
              *(_QWORD *)v20);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v15);
      Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf((__int64)a1);
      ndisMSetMiniportReadyForBinding((__int64)a1, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (a1->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry((__int64)a1);
      ndisIovDeleteDefaultNicSwitch(a1);
      ndisMHaltMiniport((__int64)a1);
      ndisMCleanupMiniportBlockOnStop((__int64)a1);
      ndisDereferenceDriver(DriverHandle, 0, 1u);
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)&v21;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &a1->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      *(_QWORD *)(DriverHandle + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DriverHandle + 416), 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice(a1);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      13,
      94,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
  }
}
