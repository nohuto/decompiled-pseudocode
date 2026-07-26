/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0097170 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C0115010 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C011509C (ndisIfUpdateL2MtuSizeAndNotify.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _UNICODE_STRING *v7; // rax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v9; // edx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx

  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop(a1, NdisSSApplyInterfaceChange);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00E677B >= 4u )
  {
    v7 = a1 ? a1->pAdapterInstanceName : 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v6,
        0x1Cu,
        0xB7u,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        &v7->Length,
        a1);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v6);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  ndisPowerSaveClearStop(a1, 11);
  ndisMRawIndicateStatusEx((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a1, a3);
  if ( a3->StatusCode == 1073873072 )
  {
    ndisIfUpdateCurrentMacAddressAndNotify(a1->IfBlock, (unsigned __int16 *)a3->StatusBuffer);
  }
  else if ( a3->StatusCode == 1073873073 )
  {
    IfBlock = a1->IfBlock;
    v9 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v9;
    ndisIfUpdateL2MtuSizeAndNotify((__int64)IfBlock, v9);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, ~a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00E677B >= 4u
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      0x1Cu,
      0xB8u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      &a1->pAdapterInstanceName->Length,
      a1);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v10);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}
