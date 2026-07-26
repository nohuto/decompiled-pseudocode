/*
 * XREFs of ndisDevicePowerDown @ 0x1C012A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(__int64 a1)
{
  __int64 v2; // r14
  int v3; // r12d
  int v4; // edx
  int v5; // edx
  _IRP *v6; // r13
  int Status; // esi
  POWER_STATE v8; // ebx
  __int64 v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // si
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  enum _DEVICE_POWER_STATE v18; // ebx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  int SetMiniportDeviceState; // edi
  int v23; // edx
  __int64 v24; // rcx
  struct _NDIS_MINIPORT_BLOCK *v25; // rdx
  KIRQL v26; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v28; // di
  unsigned __int8 v29; // al
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  __int64 v32; // rax
  __int64 v33; // [rsp+40h] [rbp-C8h]
  char v34; // [rsp+58h] [rbp-B0h]
  char v35[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v37[2]; // [rsp+178h] [rbp+70h] BYREF

  v2 = a1 - 5408;
  v3 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  memset(v37, 0, 12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      81,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v2);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    v6 = 0LL;
    Status = 0;
    v8.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v6 = *(_IRP **)(a1 + 32);
    Status = v6->IoStatus.Status;
    v8.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  v34 = Status;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) || *(_DWORD *)(v2 + 1520) != 1 )
      goto LABEL_23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        14,
        83,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v2,
        v6->IoStatus.Status);
    }
    v18 = *(_DWORD *)(v2 + 3868);
    v19 = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        14,
        84,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v2,
        *(_DWORD *)(v2 + 3868));
      v19 = *(_DWORD *)(v2 + 3868);
    }
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v19);
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxqd(
        v20,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4008),
        v2 + 4008,
        *(_DWORD *)(v2 + 4056),
        *(_QWORD *)(v2 + 4024),
        1,
        *(_DWORD *)(v2 + 3868));
    if ( (*(_DWORD *)(v2 + 124) & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState((struct _NDIS_MINIPORT_BLOCK *)v2, v18, -50265855, 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v33) = SetMiniportDeviceState;
        WPP_RECORDER_SF_qdL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v21,
          0xEu,
          0x55u,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v2,
          v18,
          v33);
      }
    }
    else
    {
      SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v2 + 5224);
    if ( SetMiniportDeviceState )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          14,
          87,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v2);
      }
      if ( (byte_1C00E8082 & 0x40) != 0 )
        McTemplateK0jqxqqq(
          v24,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(v2 + 4008),
          v2 + 4008,
          *(_DWORD *)(v2 + 4056),
          *(_QWORD *)(v2 + 4024),
          SetMiniportDeviceState,
          1,
          0);
      if ( ndisMReferenceIfBlock(v2, 0xFu) )
      {
        v32 = *(_QWORD *)(v2 + 4040);
        *(_DWORD *)(v2 + 4068) = 0;
        *(_DWORD *)(v2 + 4064) = 2;
        if ( *(_DWORD *)(v32 + 1112) != 2 )
        {
          *(_DWORD *)(v32 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(v2 + 4040) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(v2);
          v3 = 1;
        }
        ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(v2, 75);
      if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
        LOBYTE(Status) = 1;
      else
        v6->IoStatus.Status = -1073741823;
      goto LABEL_19;
    }
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5104));
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(v2 + 5032), DatapathRunning, PauseReason_LowPower) )
    {
      memset(v35, 0, sizeof(v35));
      if ( (unsigned __int8)byte_1C00E677B >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v2, (struct NDIS_PNPTRACE_LOCALS *)v35);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v25,
            0x1Cu,
            0x56u,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            *(unsigned __int16 **)&v35[8],
            *(_QWORD *)v35);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5104), v25);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5104), RunSynchronous, 0);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v2 + 520) = CurrentThread;
    v28 = v26;
    LOBYTE(CurrentThread) = 4;
    ndisMRestoreOpenHandlers(v2, (int)CurrentThread);
    v29 = ndisIfSetInterfaceState(v2, 1, v28);
    *(_QWORD *)(v2 + 520) = 0LL;
    v3 = v29;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v28);
    _m_prefetchw((const void *)(v2 + 4424));
    v30 = *(_DWORD *)(v2 + 4424);
    do
    {
      v31 = v30;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4424), v30, v30);
    }
    while ( v31 != v30 );
    if ( (v30 & 0x10) != 0 )
    {
      ndisSetDeviceInterfaceState(v2, 1u);
      _InterlockedAnd((volatile signed __int32 *)(v2 + 4424), 0xFFFFFFEF);
    }
    ndisNotifyDevicePowerStateChange(v2, v18);
    ndisIssueNetEventSetPowerEvent(v2, v18, 1);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        14,
        82,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v2,
        v8.SystemState);
    }
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v8.SystemState);
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxqd(
        v9,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4008),
        v2 + 4008,
        *(_DWORD *)(v2 + 4056),
        *(_QWORD *)(v2 + 4024),
        1,
        v8.SystemState);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    v11 = v10;
    v12 = *(_DWORD *)(v2 + 4068) & 0xFEFFFFFF;
    *(_DWORD *)(v2 + 4064) = 5;
    *(_DWORD *)(v2 + 4068) = v12 | 8;
    if ( ndisMReferenceIfBlock(v2, 0xEu) )
    {
      v13 = *(_QWORD *)(v2 + 4040);
      if ( *(_DWORD *)(v13 + 1112) != 5 )
      {
        *(_DWORD *)(v13 + 1112) = 5;
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(v2 + 4040) + 1116LL) = *(_DWORD *)(v2 + 4068);
      }
      ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWN);
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v11);
    if ( v3 )
      ndisNsiSyncMiniportOperStatusNotification(v2);
    v16 = *(_DWORD *)(v2 + 120);
    *(POWER_STATE *)(v2 + 3868) = v8;
    if ( (v16 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)(v2 + 3824), DevicePowerState, v8);
  }
  LOBYTE(Status) = v34;
LABEL_19:
  if ( v3 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) && *(_DWORD *)(v2 + 1520) == 1 )
  {
    *(_QWORD *)((char *)v37 + 4) = 0LL;
    v17 = *(_QWORD *)(v2 + 4040);
    LODWORD(v37[0]) = 786816;
    HIDWORD(v37[0]) = *(_DWORD *)(v17 + 1112);
    LODWORD(v37[1]) = *(_DWORD *)(v17 + 1116);
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = v37;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)v2;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
  }
LABEL_23:
  *(_DWORD *)(v2 + 4464) = 65534;
  if ( (byte_1C00E8083 & 4) != 0 )
    McTemplateK0jqxq(
      v15,
      &DevicePowerDownComplete,
      (const GUID *)(v2 + 4008),
      v2 + 4008,
      *(_DWORD *)(v2 + 4056),
      *(_QWORD *)(v2 + 4024),
      Status);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) == 0 )
    IofCompleteRequest(v6, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      14,
      88,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v2);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
}
