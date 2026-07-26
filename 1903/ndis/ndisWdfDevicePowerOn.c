/*
 * XREFs of ndisWdfDevicePowerOn @ 0x1C00A5A10
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisSignalD0RequestComplete @ 0x1C0014420 (ndisSignalD0RequestComplete.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C00A5F68 (ndisWdfMiniportUpdatePowerState.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 */

void __fastcall ndisWdfDevicePowerOn(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  const struct _GUID *v3; // rcx
  KIRQL v4; // al
  int v5; // edx
  KIRQL v6; // bl
  char v7; // al
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL v13; // bl
  unsigned __int64 *p_Lock; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  int v16; // edx
  unsigned int FilterPnPFlags; // eax
  int v18; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int i; // [rsp+48h] [rbp-C0h]
  char v21[160]; // [rsp+58h] [rbp-B0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+F8h] [rbp-10h] BYREF
  int v23; // [rsp+168h] [rbp+60h] BYREF
  __int64 v24; // [rsp+16Ch] [rbp+64h]
  _DWORD v25[4]; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+188h] [rbp+80h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+190h] [rbp+88h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+198h] [rbp+90h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+19Ch] [rbp+94h]

  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v3 = &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      76,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  }
  if ( (byte_1C00E8041 & 8) != 0 )
    McTemplateK0jqxq(
      (__int64)v3,
      &MiniportPoweringUp,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      3);
  ndisWdfMiniportUpdatePowerState(a1, 1LL);
  KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LOBYTE(v5) = 4;
  a1->MiniportThread = KeGetCurrentThread();
  v6 = v4;
  ndisMRestoreOpenHandlers((__int64)a1, v5);
  v7 = ndisIfSetInterfaceState((__int64)a1, 1, v6);
  a1->MiniportThread = 0LL;
  v8 = v7;
  KeReleaseSpinLock(&a1->Lock, v6);
  _m_prefetchw(&a1->InterlockedFlags);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0) & 0x10) != 0 )
  {
    LOBYTE(v9) = 1;
    ndisSetDeviceInterfaceState(a1, v9);
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFFEF);
  }
  ndisNotifyMiniports(a1);
  if ( (byte_1C00E8041 & 8) != 0 )
    McTemplateK0jqxqd(
      v11,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      1);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner, v10, v12);
  ndisIssueNetEventSetPowerEvent((char)a1);
  ndisNotifyDevicePowerStateChange((__int64)a1, 1);
  if ( (a1->PnPFlags & 0x10000000) != 0 && (a1->Flags & 0x20000000) != 0 )
  {
    while ( 1 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      p_Lock = &a1->Lock;
      if ( !a1->LockAcquired )
        break;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v13);
      for ( i = 0; i < 0x32; ++i )
        ;
    }
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    a1->Flags &= ~0x20000000u;
    v25[2] = MiniportMediaDuplexState;
    MiniportXmitLinkSpeed = a1->MiniportXmitLinkSpeed;
    MiniportRcvLinkSpeed = a1->MiniportRcvLinkSpeed;
    MiniportPauseFunctions = a1->MiniportPauseFunctions;
    MiniportAutoNegotiationFlags = a1->MiniportAutoNegotiationFlags;
    v25[3] = 0;
    v25[0] = 2621824;
    v25[1] = 1;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Flags |= 8u;
    StatusIndication.StatusBuffer = v25;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807383;
    StatusIndication.StatusBufferSize = 40;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    if ( v13 != 2 )
      KeLowerIrql(v13);
  }
  ndisSignalD0RequestComplete(a1, 0);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x100) != 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v21, 0, sizeof(v21));
      if ( (unsigned __int8)byte_1C00E673B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            0x1Cu,
            0x4Du,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            *(unsigned __int16 **)&v21[8],
            *(_QWORD *)v21);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 1);
  }
  if ( !ndisAoAcCapable && !ndisAoAcTest || v8 )
  {
    if ( ndisMReferenceIfBlock((__int64)a1, 0xDu) )
    {
      IfBlock = a1->IfBlock;
      v24 = 0LL;
      v23 = 786816;
      v24 = *(_QWORD *)&IfBlock->ifOperStatus;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v23;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, MPIFREF_DEVPOWERUP);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      14,
      78,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  }
}
