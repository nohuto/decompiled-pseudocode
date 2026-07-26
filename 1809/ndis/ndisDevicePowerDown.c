/*
 * XREFs of ndisDevicePowerDown @ 0x1C010ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010C04 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0010C30 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
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
 *     ndisMiniportFatalError @ 0x1C00F434C (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0107614 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  __int64 v3; // rdi
  _IRP *v4; // r13
  int Status; // r12d
  POWER_STATE v6; // ebx
  __int64 v7; // rcx
  KIRQL v8; // al
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // edx
  __int64 v16; // rcx
  int SetMiniportDeviceState; // eax
  int v18; // edi
  __int64 v19; // rcx
  struct _NDIS_MINIPORT_BLOCK *v20; // rdx
  KIRQL v21; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v23; // di
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rax
  struct _KEVENT *v29; // rcx
  __int64 v30; // [rsp+28h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+58h] [rbp-B0h]
  int NewIrql_4; // [rsp+5Ch] [rbp-ACh]
  _QWORD v34[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v36; // [rsp+178h] [rbp+70h] BYREF
  int v37; // [rsp+180h] [rbp+78h]

  v1 = 0;
  NewIrql_4 = 0;
  v2 = a1 - 5472;
  v3 = a1;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x4Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    v4 = 0LL;
    Status = 0;
    v6.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v4 = *(_IRP **)(v3 + 32);
    Status = v4->IoStatus.Status;
    v6.SystemState = (_SYSTEM_POWER_STATE)v4->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) || *(_DWORD *)(v2 + 1520) != 1 )
      goto LABEL_23;
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_qD(0x50u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v4->IoStatus.Status);
    v14 = *(_DWORD *)(v2 + 3900);
    v15 = v14;
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
    {
      WPP_SF_qD(0x51u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v14);
      v15 = *(_DWORD *)(v2 + 3900);
    }
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v15);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxqd(
        v16,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4040),
        v2 + 4040,
        *(_DWORD *)(v2 + 4088),
        *(_QWORD *)(v2 + 4056),
        1,
        *(_DWORD *)(v2 + 3900));
    if ( (*(_DWORD *)(v2 + 124) & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v2, v14, -50265855, 1u);
      v18 = SetMiniportDeviceState;
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
      {
        LODWORD(v30) = SetMiniportDeviceState;
        WPP_SF_qdD(0x52u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v14, v30);
      }
    }
    else
    {
      v18 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v2 + 5264);
    if ( v18 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(0x54u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
      if ( (byte_1C00A2082 & 0x40) != 0 )
        McTemplateK0jqxqdq(
          v19,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(v2 + 4040),
          v2 + 4040,
          *(_DWORD *)(v2 + 4088),
          *(_QWORD *)(v2 + 4056),
          v18,
          28,
          0);
      if ( ndisMReferenceIfBlock(v2, 0xFu) )
      {
        v28 = *(_QWORD *)(v2 + 4072);
        *(_DWORD *)(v2 + 4100) = 0;
        *(_DWORD *)(v2 + 4096) = 2;
        if ( *(_DWORD *)(v28 + 1112) != 2 )
        {
          *(_DWORD *)(v28 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(v2 + 4072) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(v2);
          NewIrql_4 = 1;
        }
        ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(v2, 0x4Bu);
      if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
        Status = -1073741823;
      else
        v4->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5144));
      if ( Ndis::BindState::SetPause((Ndis::BindState *)(v2 + 5072), DatapathRunning, PauseReason_LowPower)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v2, (struct NDIS_PNPTRACE_LOCALS *)v34);
        WPP_SF_Zq(0x53u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (const wchar_t *)v34[1], v34[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5144), v20);
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5144), RunSynchronous, 0);
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v2 + 520) = CurrentThread;
      v23 = v21;
      LOBYTE(CurrentThread) = 4;
      *(_DWORD *)(v2 + 1864) = 1706811;
      ndisMRestoreOpenHandlers(v2, (__int64)CurrentThread);
      LOBYTE(v24) = 1;
      v25 = ndisIfSetInterfaceState(v2, v24, v23);
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1864) = 0;
      NewIrql_4 = v25;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v23);
      _m_prefetchw((const void *)(v2 + 4464));
      v26 = *(_DWORD *)(v2 + 4464);
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4464), v26, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(v2, 1u);
        _InterlockedAnd((volatile signed __int32 *)(v2 + 4464), 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(v2, v14);
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)v2, v14, 1);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(0x4Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v6.SystemState);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v6.SystemState);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxqd(
        v7,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4040),
        v2 + 4040,
        *(_DWORD *)(v2 + 4088),
        *(_QWORD *)(v2 + 4056),
        1,
        v6.SystemState);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    NewIrql = v8;
    v9 = *(_DWORD *)(v2 + 4100) & 0xFEFFFFF7 | 8;
    *(_DWORD *)(v2 + 1864) = 1706655;
    *(_DWORD *)(v2 + 4100) = v9;
    *(_DWORD *)(v2 + 4096) = 5;
    if ( ndisMReferenceIfBlock(v2, 0xEu) )
    {
      v10 = *(_QWORD *)(v2 + 4072);
      if ( *(_DWORD *)(v10 + 1112) != 5 )
      {
        *(_DWORD *)(v10 + 1112) = 5;
        v1 = 1;
        NewIrql_4 = 1;
        *(_DWORD *)(*(_QWORD *)(v2 + 4072) + 1116LL) = *(_DWORD *)(v2 + 4100);
      }
      ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWN);
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), NewIrql);
    if ( v1 )
      ndisNsiSyncMiniportOperStatusNotification(v2);
    v12 = *(_DWORD *)(v2 + 120);
    *(POWER_STATE *)(v2 + 3900) = v6;
    if ( (v12 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)(v2 + 3856), DevicePowerState, v6);
  }
  if ( NewIrql_4 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) && *(_DWORD *)(v2 + 1520) == 1 )
  {
    v13 = *(_QWORD *)(v2 + 4072);
    v37 = 0;
    v36 = 786816LL;
    HIDWORD(v36) = *(_DWORD *)(v13 + 1112);
    v37 = *(_DWORD *)(v13 + 1116);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v36;
    StatusIndication.SourceHandle = (void *)v2;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
  }
  v3 = a1;
LABEL_23:
  *(_DWORD *)(v2 + 4504) = 65534;
  if ( (byte_1C00A2083 & 4) != 0 )
    McTemplateK0jqxq(
      v11,
      &DevicePowerDownComplete,
      (const GUID *)(v2 + 4040),
      v2 + 4040,
      *(_DWORD *)(v2 + 4088),
      *(_QWORD *)(v2 + 4056),
      Status);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 || (IofCompleteRequest(v4, 0), (*(_DWORD *)(v3 - 5352) & 0x80u) != 0) )
  {
    v29 = *(struct _KEVENT **)(v2 + 5416);
    *(_DWORD *)(v2 + 5424) = Status;
    KeSetEvent(v29, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x55u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
