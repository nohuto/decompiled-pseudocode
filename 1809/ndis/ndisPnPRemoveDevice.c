/*
 * XREFs of ndisPnPRemoveDevice @ 0x1C0118F00
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00F4F94 (ndisPnPRemoveDeviceEx.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008E20 (NdisResetEvent.c)
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     ndisReferenceDriver @ 0x1C00151A8 (ndisReferenceDriver.c)
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C0061B70 (ndisIMDeleteIfStackEntry.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMHaltMiniport @ 0x1C00EC4FC (ndisMHaltMiniport.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00F01D8 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C00F2FE0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisIovTeardownVf @ 0x1C00F94D0 (ndisIovTeardownVf.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle, unsigned __int8 a2)
{
  char v3; // r12
  __int64 DriverHandle; // rdi
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rsi
  const void **pAdapterInstanceName; // rdx
  PVOID v9; // rsi
  unsigned __int16 *v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  char v13; // r14
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PVOID WnodeEventItem[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x59u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  DriverHandle = (__int64)MiniportAdapterHandle->DriverHandle;
  if ( DriverHandle )
  {
    if ( (*(_BYTE *)(DriverHandle + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(DriverHandle + 416), Executive, 0, 0, 0LL);
      v3 = 1;
      *(_QWORD *)(DriverHandle + 472) = KeGetCurrentThread();
    }
    ndisCancelWaitWake((__int64)MiniportAdapterHandle);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DriverHandle + 392));
    for ( i = *(struct _NDIS_MINIPORT_BLOCK **)(DriverHandle + 16); i && i != MiniportAdapterHandle; i = i->NextMiniport )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)(DriverHandle + 392), v6);
    if ( i != MiniportAdapterHandle || MiniportAdapterHandle->Ref.Closing == 1 )
    {
      MiniportAdapterHandle->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle);
      NdisResetEvent(&MiniportAdapterHandle->OpenReadyEvent);
      pAdapterInstanceName = (const void **)MiniportAdapterHandle->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        ndisSetupWmiNode(
          (__int64)MiniportAdapterHandle,
          pAdapterInstanceName,
          MiniportAdapterHandle->MiniportName.Length + 2,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          WnodeEventItem);
        v9 = WnodeEventItem[0];
        if ( WnodeEventItem[0] )
        {
          v10 = (unsigned __int16 *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
          *v10 = MiniportAdapterHandle->MiniportName.Length;
          memmove(v10 + 1, MiniportAdapterHandle->MiniportName.Buffer, MiniportAdapterHandle->MiniportName.Length);
          v11 = IoWMIWriteEvent(v9);
          v13 = v11;
          if ( v11 < 0 )
          {
            if ( (unsigned __int8)byte_1C00A0261 >= 2u )
              WPP_SF_(0x5Au, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
            if ( (byte_1C00A2081 & 0x10) != 0 )
              McTemplateK0jqxq(
                v12,
                &IndicateAdapterRemovalFailed,
                &MiniportAdapterHandle->InterfaceGuid,
                (__int64)&MiniportAdapterHandle->InterfaceGuid,
                MiniportAdapterHandle->IfIndex,
                MiniportAdapterHandle->NetLuid.Value,
                v13);
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&MiniportAdapterHandle->BindEngine);
      if ( Ndis::BindState::SetPause(
             &MiniportAdapterHandle->Bindings.Miniport,
             DatapathPaused,
             PauseReason_RemovingMiniport)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(MiniportAdapterHandle, (struct NDIS_PNPTRACE_LOCALS *)v18);
        WPP_SF_Zq(0x5Bu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (const wchar_t *)v18[1], v18[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates(&MiniportAdapterHandle->BindEngine, v14);
      Ndis::BindEngine::ApplyBindChanges(&MiniportAdapterHandle->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = MiniportAdapterHandle->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf((__int64)MiniportAdapterHandle);
      ndisMSetMiniportReadyForBinding((__int64)MiniportAdapterHandle, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (MiniportAdapterHandle->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry((__int64)MiniportAdapterHandle);
      ndisIovDeleteDefaultNicSwitch(MiniportAdapterHandle);
      ndisMHaltMiniport((ULONG_PTR)MiniportAdapterHandle);
      ndisMCleanupMiniportBlockOnStop((__int64)MiniportAdapterHandle);
      ndisDereferenceDriver(DriverHandle, 0, 1u);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v19;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &MiniportAdapterHandle->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      *(_QWORD *)(DriverHandle + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DriverHandle + 416), 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice((__int64)MiniportAdapterHandle);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x5Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
}
