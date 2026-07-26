/*
 * XREFs of ndisDevicePowerOn @ 0x1C010A1E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetEvent @ 0x1C0008E00 (NdisSetEvent.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisSignalD0RequestComplete @ 0x1C0010420 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0010B88 (ndisReturnQueuedLowPowerNbls.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010C04 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0010C30 (ndisMRestoreOpenHandlers.c)
 *     ndisSetWakeUpTimer @ 0x1C00153E8 (ndisSetWakeUpTimer.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0069C5C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B8374 (ndisQuerySetMiniportDeviceState.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B8484 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B8B70 (ndisNotifyDevicePowerStateChange.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00BD698 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00BD718 (ndisSetDeviceInterfaceState.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMiniportFatalError @ 0x1C00F434C (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00F56C0 (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 v4; // rcx
  _IRP *v5; // r15
  int Status; // r13d
  POWER_STATE v7; // r12d
  char v8; // bl
  int SetMiniportDeviceState; // eax
  int v10; // r14d
  KIRQL v11; // al
  KIRQL v12; // bl
  __int64 v13; // rdx
  KIRQL v14; // di
  __int64 v15; // rdx
  __int64 v16; // r9
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int v19; // eax
  __int64 v20; // rcx
  _DEVICE_OBJECT *v21; // rcx
  POWER_STATE v22; // r8d
  unsigned __int8 v23; // al
  KIRQL v24; // al
  struct _KTHREAD *v25; // rdx
  KIRQL v26; // bl
  KIRQL v27; // al
  KIRQL v28; // bl
  __int64 v29; // rax
  KIRQL v30; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v32; // bl
  KIRQL v33; // al
  KIRQL v34; // bl
  KSPIN_LOCK *v35; // rcx
  struct _NDIS_MINIPORT_BLOCK *v36; // rdx
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int16 v38; // [rsp+58h] [rbp-B0h]
  char v39; // [rsp+5Ah] [rbp-AEh]
  unsigned int i; // [rsp+5Ch] [rbp-ACh]
  int v41; // [rsp+60h] [rbp-A8h]
  BOOL v42; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v43[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v45; // [rsp+178h] [rbp+70h] BYREF
  int v46; // [rsp+180h] [rbp+78h]
  _QWORD v47[5]; // [rsp+188h] [rbp+80h] BYREF

  v1 = a1 - 5432;
  v2 = 0;
  v41 = 0;
  v39 = 0;
  v38 = 0;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x3Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    v7.SystemState = PowerSystemWorking;
  }
  else
  {
    v5 = *(_IRP **)(a1 + 32);
    Status = v5->IoStatus.Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_DWORD *)(v1 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x40u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxq(
        v4,
        &PowerOnMiniportNotStarted,
        (const GUID *)(v1 + 4040),
        v1 + 4040,
        *(_DWORD *)(v1 + 4088),
        *(_QWORD *)(v1 + 4056),
        44);
    v21 = *(_DEVICE_OBJECT **)(v1 + 3856);
    v22.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(v1 + 3900) = v22;
    PoSetPowerState(v21, DevicePowerState, v22);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5264);
    ndisScheduleD0CompleteSignalWorkItem(v1, 0);
    IofCompleteRequest(v5, 0);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(v1 + 124) & 0x10) == 0 )
  {
    v8 = 0;
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_qD(0x43u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(0x44u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
      if ( *(_DWORD *)(v1 + 3900) == 1 )
      {
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) && *(_DWORD *)(v1 + 1520) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(v1 + 3760));
          v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(v1 + 520) = CurrentThread;
          v32 = v30;
          LOBYTE(CurrentThread) = 4;
          *(_DWORD *)(v1 + 1864) = 1706325;
          ndisMRestoreOpenHandlers(v1, (__int64)CurrentThread);
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v32);
          v2 = 1;
          HIBYTE(v38) = 0;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_q(0x45u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0jqxq(
            v4,
            &MiniportPoweringUp,
            (const GUID *)(v1 + 4040),
            v1 + 4040,
            *(_DWORD *)(v1 + 4088),
            *(_QWORD *)(v1 + 4056),
            132);
        if ( (*(_DWORD *)(v1 + 124) & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            v23 = *(_BYTE *)(v1 + 32);
            if ( v23 > 6u || v23 == 6 && *(_BYTE *)(v1 + 33) >= 0x1Eu )
            {
              v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              v25 = KeGetCurrentThread();
              *(_QWORD *)(v1 + 520) = v25;
              v26 = v24;
              LOBYTE(v25) = 4;
              *(_DWORD *)(v1 + 1864) = 1706131;
              ndisMRestoreOpenHandlers(v1, (__int64)v25);
              *(_QWORD *)(v1 + 520) = 0LL;
              *(_DWORD *)(v1 + 1864) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v26);
              v8 = 1;
              LOBYTE(v38) = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v1, v7.SystemState, -50265855, 1u);
          v10 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
          {
            LODWORD(v37) = SetMiniportDeviceState;
            WPP_SF_qdD(0x46u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1, v7.SystemState, v37);
          }
          if ( v10 )
          {
            if ( v8 )
            {
              v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
              v28 = v27;
              *(_DWORD *)(v1 + 1864) = 1706157;
              ndisMSwapOpenHandlers(v1, 4u);
              *(_QWORD *)(v1 + 520) = 0LL;
              *(_DWORD *)(v1 + 1864) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v28);
              LOBYTE(v38) = 0;
            }
          }
          else
          {
            *(POWER_STATE *)(v1 + 3900) = v7;
          }
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
          v12 = v11;
          *(_DWORD *)(v1 + 1864) = 1706166;
          ndisSetWakeUpTimer(v1);
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        }
        else if ( (*(_WORD *)(*(_QWORD *)(v1 + 3792) + 26LL) & 1) == 0 && (*(_DWORD *)(v1 + 124) & 0x4000) != 0 )
        {
          v10 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        else
        {
          v10 = 0;
        }
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C00A025D >= 2u )
            WPP_SF_qD(0x48u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1, v10);
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
            Status = -1073741823;
          else
            v5->IoStatus.Status = -1073741823;
          *(_QWORD *)(v1 + 4096) = 2LL;
          if ( ndisMReferenceIfBlock(v1, 0xCu) )
          {
            v29 = *(_QWORD *)(v1 + 4072);
            if ( *(_DWORD *)(v29 + 1112) != 2 )
            {
              *(_DWORD *)(v29 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(v1 + 4072) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification(v1);
              v41 = 1;
            }
            ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v39 = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) )
          {
            NdisSetEvent((PNDIS_EVENT)(v1 + 3760));
            v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
            *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v1 + 1864) = 1706197;
            if ( !(_BYTE)v38 )
            {
              LOBYTE(v13) = 4;
              ndisMRestoreOpenHandlers(v1, v13);
            }
            LOBYTE(v13) = 1;
            v41 = (unsigned __int8)ndisIfSetInterfaceState(v1, v13, v14);
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1864) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v14);
            _m_prefetchw((const void *)(v1 + 4464));
            v17 = *(_DWORD *)(v1 + 4464);
            do
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4464), v17, v17);
            }
            while ( v18 != v17 );
            if ( (v17 & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState(v1, 1u);
              _InterlockedAnd((volatile signed __int32 *)(v1 + 4464), 0xFFFFFFEF);
            }
            HIBYTE(v38) = 1;
            v42 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(v1, v15, &v42, v16);
            if ( *(_BYTE *)(v1 + 32) < 6u )
              ndisQueryMediaStatus((void *)v1);
          }
          *(POWER_STATE *)(v1 + 3900) = v7;
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
            WPP_SF_qD(0x47u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1, v7.SystemState);
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, v7.SystemState);
          if ( (byte_1C00A2081 & 8) != 0 )
            McTemplateK0jqxqd(
              v4,
              &DevicePowerStateChange,
              (const GUID *)(v1 + 4040),
              v1 + 4040,
              *(_DWORD *)(v1 + 4088),
              *(_QWORD *)(v1 + 4056),
              1,
              v7.SystemState);
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3856), DevicePowerState, v7);
        }
        v2 = HIBYTE(v38);
      }
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
    {
      Status = v5->IoStatus.Status;
      IofCompleteRequest(v5, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_qD(0x49u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1, Status);
      if ( (byte_1C00A2083 & 2) != 0 )
        McTemplateK0jqxqdq(
          v4,
          &DevicePowerOnFailed,
          (const GUID *)(v1 + 4040),
          v1 + 4040,
          *(_DWORD *)(v1 + 4088),
          *(_QWORD *)(v1 + 4056),
          Status,
          128,
          0);
      ndisMiniportFatalError(v1, 0x4Au);
    }
    if ( *(int *)(v1 + 1880) < 0 )
      ndisReturnQueuedLowPowerNbls(v1, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5264);
    if ( !v2 )
      goto LABEL_50;
    ndisIssueNetEventSetPowerEvent(
      (struct _NDIS_MINIPORT_BLOCK *)v1,
      v7.SystemState,
      (*(_DWORD *)(v1 + 120) & 0x80) == 0);
    ndisNotifyDevicePowerStateChange(v1, v7.SystemState);
    if ( (*(_DWORD *)(v1 + 124) & 0x10000000) != 0 )
    {
      if ( (*(_DWORD *)(v1 + 120) & 0x20000000) == 0 )
        goto LABEL_48;
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      v34 = v33;
      while ( 1 )
      {
        *(_DWORD *)(v1 + 1864) = 1706409;
        v35 = (KSPIN_LOCK *)(v1 + 96);
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1864) = 0;
        KeReleaseSpinLock(v35, v34);
        for ( i = 0; i < 0x32; ++i )
          ;
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1868) = 1706409;
      *(_QWORD *)(v1 + 1872) = KeGetCurrentThread();
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel(v35);
      *(_DWORD *)(v1 + 120) &= ~0x20000000u;
      memset(v47, 0, sizeof(v47));
      LODWORD(v47[1]) = *(_DWORD *)(v1 + 348);
      v47[2] = *(_QWORD *)(v1 + 2776);
      v47[3] = *(_QWORD *)(v1 + 2784);
      v47[4] = *(_QWORD *)(v1 + 812);
      v47[0] = 0x100280180LL;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Flags |= 8u;
      StatusIndication.StatusBuffer = v47;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = (void *)v1;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = 40;
      NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1868) = 0;
      *(_QWORD *)(v1 + 1872) = 0LL;
      if ( v34 != 2 )
        KeLowerIrql(v34);
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x20000000) != 0 )
    {
LABEL_50:
      ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, Status);
      ndisMSetMiniportReadyForBinding(v1, 1, Reason_MiniportLowPower, RunAsynchronous);
      if ( v39 )
      {
        v19 = *(_DWORD *)(v1 + 2700);
        if ( (v19 & 0x100) != 0 )
        {
          *(_DWORD *)(v1 + 2700) = v19 & 0xFFFFFEFF;
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v1 + 5144));
          if ( Ndis::BindState::SetPause((Ndis::BindState *)(v1 + 5072), DatapathRunning, PauseReason_LowPower)
            && (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v1, (struct NDIS_PNPTRACE_LOCALS *)v43);
            WPP_SF_Zq(0x4Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (const wchar_t *)v43[1], v43[0]);
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5144), v36);
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5144), RunSynchronous, 1);
        }
      }
      if ( (!ndisAoAcCapable && !ndisAoAcTest || v41)
        && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1)
        && *(_DWORD *)(v1 + 1520) == 1
        && ndisMReferenceIfBlock(v1, 0xDu) )
      {
        v20 = *(_QWORD *)(v1 + 4072);
        v46 = 0;
        v45 = 786816LL;
        HIDWORD(v45) = *(_DWORD *)(v20 + 1112);
        v46 = *(_DWORD *)(v20 + 1116);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v45;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807395;
        StatusIndication.StatusBufferSize = 12;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUP);
      }
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(0x4Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
LABEL_60:
      ndisDereferenceMiniport(v1, 0xCu);
      ndisDereferencePackage((__int64)&ndisPkgs);
      return;
    }
LABEL_48:
    if ( HIBYTE(v38) )
      ndisSetMediaDisconnectTimer(v1);
    goto LABEL_50;
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x41u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
  if ( (byte_1C00A2081 & 8) != 0 )
    McTemplateK0jqxq(
      v4,
      &PowerOnMiniportRemoved,
      (const GUID *)(v1 + 4040),
      v1 + 4040,
      *(_DWORD *)(v1 + 4088),
      *(_QWORD *)(v1 + 4056),
      86);
  IofCompleteRequest(v5, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5264);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
  ndisDereferenceMiniport(v1, 0xCu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x42u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v1);
}
