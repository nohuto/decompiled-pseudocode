/*
 * XREFs of ndisDevicePowerOn @ 0x1C012A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisSetEvent @ 0x1C00114C0 (NdisSetEvent.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSignalD0RequestComplete @ 0x1C0014420 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0014538 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A56B8 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6F54 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edx
  char v4; // di
  char v5; // r13
  int v6; // edx
  __int64 v7; // rcx
  _IRP *v8; // r15
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  int v10; // ebx
  int v11; // edx
  int v12; // edx
  int SetMiniportDeviceState; // r14d
  KIRQL v14; // al
  struct _KTHREAD *v15; // rdx
  KIRQL v16; // bl
  int v17; // edx
  KIRQL v18; // al
  int v19; // edx
  KIRQL v20; // di
  char v21; // r13
  int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  _DEVICE_OBJECT *v25; // rcx
  POWER_STATE v26; // r8d
  int v27; // edx
  unsigned __int8 v28; // al
  KIRQL v29; // al
  struct _KTHREAD *v30; // rdx
  KIRQL v31; // bl
  KIRQL v32; // al
  KIRQL v33; // bl
  __int64 v34; // rax
  KIRQL v35; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v37; // bl
  KIRQL v38; // bl
  KSPIN_LOCK *v39; // rcx
  unsigned int v40; // eax
  struct _NDIS_MINIPORT_BLOCK *v41; // rdx
  char v42; // [rsp+58h] [rbp-B0h]
  char v43; // [rsp+59h] [rbp-AFh]
  int Status; // [rsp+5Ch] [rbp-ACh]
  unsigned int i; // [rsp+60h] [rbp-A8h]
  int v46; // [rsp+64h] [rbp-A4h]
  char v47[160]; // [rsp+78h] [rbp-90h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v49[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v50[5]; // [rsp+198h] [rbp+90h] BYREF

  v1 = a1 - 5368;
  v42 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v46 = 0;
  memset(v49, 0, 12);
  memset(v50, 0, sizeof(v50));
  v4 = 0;
  v43 = 0;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      63,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
  {
    v8 = 0LL;
    Status = 0;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    v8 = *(_IRP **)(a1 + 32);
    DeviceState = v8->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
    Status = v8->IoStatus.Status;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_DWORD *)(v1 + 1520) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        14,
        64,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v1);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxq(
        v7,
        &PowerOnMiniportNotStarted,
        (const GUID *)(v1 + 4008),
        v1 + 4008,
        *(_DWORD *)(v1 + 4056),
        *(_QWORD *)(v1 + 4024),
        1);
    v25 = *(_DEVICE_OBJECT **)(v1 + 3824);
    v26.SystemState = (_SYSTEM_POWER_STATE)v8->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(v1 + 3868) = v26;
    PoSetPowerState(v25, DevicePowerState, v26);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5224);
    ndisScheduleD0CompleteSignalWorkItem(v1, 0);
    IofCompleteRequest(v8, 0);
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(v1 + 124) & 0x10) == 0 )
  {
    v10 = Status;
    if ( Status < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          14,
          67,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v1,
          Status);
      }
      v21 = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          14,
          68,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v1);
      }
      if ( *(_DWORD *)(v1 + 3868) == 1 )
      {
        v21 = 0;
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) && *(_DWORD *)(v1 + 1520) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(v1 + 520) = CurrentThread;
          v37 = v35;
          LOBYTE(CurrentThread) = 4;
          ndisMRestoreOpenHandlers(v1, (int)CurrentThread);
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v37);
          v10 = Status;
          v4 = 1;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            14,
            69,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            v1);
        }
        if ( (byte_1C00E8081 & 8) != 0 )
          McTemplateK0jqxq(
            v7,
            &MiniportPoweringUp,
            (const GUID *)(v1 + 4008),
            v1 + 4008,
            *(_DWORD *)(v1 + 4056),
            *(_QWORD *)(v1 + 4024),
            2);
        v11 = *(_DWORD *)(v1 + 124);
        if ( (v11 & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            v28 = *(_BYTE *)(v1 + 32);
            if ( v28 > 6u || v28 == 6 && *(_BYTE *)(v1 + 33) >= 0x1Eu )
            {
              v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              v30 = KeGetCurrentThread();
              *(_QWORD *)(v1 + 520) = v30;
              v31 = v29;
              LOBYTE(v30) = 4;
              ndisMRestoreOpenHandlers(v1, (int)v30);
              *(_QWORD *)(v1 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v31);
              v5 = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                     (struct _NDIS_MINIPORT_BLOCK *)v1,
                                     DeviceState,
                                     -50265855,
                                     1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qdL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v12,
              0xEu,
              0x46u,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              v1,
              DeviceState,
              SetMiniportDeviceState);
          if ( SetMiniportDeviceState )
          {
            if ( v5 )
            {
              v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
              v33 = v32;
              ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4);
              *(_QWORD *)(v1 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v33);
              v5 = 0;
            }
          }
          else
          {
            *(_DWORD *)(v1 + 3868) = DeviceState;
          }
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          v15 = KeGetCurrentThread();
          *(_QWORD *)(v1 + 520) = v15;
          v16 = v14;
          ndisSetWakeUpTimer(v1, (__int64)v15);
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v16);
          v10 = Status;
        }
        else if ( (*(_WORD *)(*(_QWORD *)(v1 + 3760) + 26LL) & 1) == 0 && (*(_DWORD *)(v1 + 124) & 0x4000) != 0 )
        {
          SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        else
        {
          SetMiniportDeviceState = 0;
        }
        if ( SetMiniportDeviceState )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              14,
              72,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              v1,
              SetMiniportDeviceState);
          }
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
          {
            v10 = -1073741823;
            Status = -1073741823;
          }
          else
          {
            v8->IoStatus.Status = -1073741823;
          }
          *(_QWORD *)(v1 + 4064) = 2LL;
          if ( ndisMReferenceIfBlock(v1, 0xCu) )
          {
            v34 = *(_QWORD *)(v1 + 4040);
            if ( *(_DWORD *)(v34 + 1112) != 2 )
            {
              *(_DWORD *)(v34 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification(v1);
              v46 = 1;
            }
            ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v43 = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) )
          {
            NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
            v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
            *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
            v20 = v18;
            if ( !v5 )
            {
              LOBYTE(v19) = 4;
              ndisMRestoreOpenHandlers(v1, v19);
            }
            v46 = (unsigned __int8)ndisIfSetInterfaceState(v1, 1, v20);
            *(_QWORD *)(v1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v20);
            _m_prefetchw((const void *)(v1 + 4424));
            if ( (_InterlockedOr((volatile signed __int32 *)(v1 + 4424), 0) & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState(v1, 1u);
              _InterlockedAnd((volatile signed __int32 *)(v1 + 4424), 0xFFFFFFEF);
            }
            v42 = 1;
            ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v1);
            if ( *(_BYTE *)(v1 + 32) < 6u )
              ndisQueryMediaStatus((struct _NDIS_MINIPORT_BLOCK *)v1);
          }
          *(_DWORD *)(v1 + 3868) = DeviceState;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              14,
              71,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              v1,
              DeviceState);
          }
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, DeviceState);
          if ( (byte_1C00E8081 & 8) != 0 )
            McTemplateK0jqxqd(
              v7,
              &DevicePowerStateChange,
              (const GUID *)(v1 + 4008),
              v1 + 4008,
              *(_DWORD *)(v1 + 4056),
              *(_QWORD *)(v1 + 4024),
              1,
              DeviceState);
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3824), DevicePowerState, (POWER_STATE)DeviceState);
          v10 = Status;
        }
        v21 = v42;
        v4 = v42;
      }
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
    {
      v10 = v8->IoStatus.Status;
      Status = v10;
      IofCompleteRequest(v8, 0);
    }
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          14,
          73,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v1,
          v10);
      }
      if ( (byte_1C00E8083 & 2) != 0 )
        McTemplateK0jqxqqq(
          v7,
          &DevicePowerOnFailed,
          (const GUID *)(v1 + 4008),
          v1 + 4008,
          *(_DWORD *)(v1 + 4056),
          *(_QWORD *)(v1 + 4024),
          v10,
          1,
          0);
      ndisMiniportFatalError(v1, 74);
    }
    if ( *(int *)(v1 + 1872) < 0 )
      ndisReturnQueuedLowPowerNbls(v1, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5224);
    if ( !v4 )
      goto LABEL_49;
    ndisIssueNetEventSetPowerEvent(v1, DeviceState, (*(_DWORD *)(v1 + 120) & 0x80) == 0);
    ndisNotifyDevicePowerStateChange(v1, DeviceState);
    if ( (*(_DWORD *)(v1 + 124) & 0x10000000) != 0 )
    {
      if ( (*(_DWORD *)(v1 + 120) & 0x20000000) == 0 )
        goto LABEL_47;
      while ( 1 )
      {
        v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v39 = (KSPIN_LOCK *)(v1 + 96);
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLock(v39, v38);
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLockFromDpcLevel(v39);
      v40 = *(_DWORD *)(v1 + 348);
      *(_DWORD *)(v1 + 120) &= ~0x20000000u;
      v50[1] = v40;
      v50[2] = *(_QWORD *)(v1 + 2760);
      v50[3] = *(_QWORD *)(v1 + 2768);
      v50[4] = *(_QWORD *)(v1 + 812);
      v50[0] = 0x100280180LL;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Flags |= 8u;
      StatusIndication.StatusBuffer = v50;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBufferSize = 40;
      StatusIndication.SourceHandle = (void *)v1;
      StatusIndication.StatusCode = 1073807383;
      NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
      *(_BYTE *)(v1 + 89) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
      if ( v38 != 2 )
        KeLowerIrql(v38);
      v10 = Status;
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x20000000) != 0 )
    {
LABEL_49:
      ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v10);
      ndisMSetMiniportReadyForBinding(v1, 1, Reason_MiniportLowPower, RunAsynchronous);
      if ( v43 )
      {
        v23 = *(_DWORD *)(v1 + 2684);
        if ( (v23 & 0x100) != 0 )
        {
          *(_DWORD *)(v1 + 2684) = v23 & 0xFFFFFEFF;
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v1 + 5104));
          if ( Ndis::BindState::SetPause((Ndis::BindState *)(v1 + 5032), DatapathRunning, PauseReason_LowPower) )
          {
            memset(v47, 0, sizeof(v47));
            if ( (unsigned __int8)byte_1C00E677B >= 4u )
            {
              ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v1, (struct NDIS_PNPTRACE_LOCALS *)v47);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v41,
                  0x1Cu,
                  0x4Au,
                  (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
                  *(unsigned __int16 **)&v47[8],
                  *(_QWORD *)v47);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5104), v41);
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5104), RunSynchronous, 1);
        }
      }
      if ( (!ndisAoAcCapable && !ndisAoAcTest || v46)
        && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1)
        && *(_DWORD *)(v1 + 1520) == 1
        && ndisMReferenceIfBlock(v1, 0xDu) )
      {
        v24 = *(_QWORD *)(v1 + 4040);
        *(_QWORD *)((char *)v49 + 4) = 0LL;
        LODWORD(v49[0]) = 786816;
        HIDWORD(v49[0]) = *(_DWORD *)(v24 + 1112);
        LODWORD(v49[1]) = *(_DWORD *)(v24 + 1116);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v49;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807395;
        StatusIndication.StatusBufferSize = 12;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUP);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          14,
          75,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v1);
      }
LABEL_59:
      ndisDereferenceMiniport(v1, 0xCu);
      ndisDereferencePackage((__int64)&ndisPkgs);
      return;
    }
LABEL_47:
    if ( v21 )
      ndisSetMediaDisconnectTimer(v1);
    goto LABEL_49;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      65,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v1);
  }
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxq(
      v7,
      &PowerOnMiniportRemoved,
      (const GUID *)(v1 + 4008),
      v1 + 4008,
      *(_DWORD *)(v1 + 4056),
      *(_QWORD *)(v1 + 4024),
      1);
  IofCompleteRequest(v8, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5224);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
  ndisDereferenceMiniport(v1, 0xCu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      14,
      66,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v1);
  }
}
