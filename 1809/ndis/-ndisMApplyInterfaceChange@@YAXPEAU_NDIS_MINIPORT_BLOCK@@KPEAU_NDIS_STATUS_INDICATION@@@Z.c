/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00EF0D0
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00602A0 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisPowerSaveClearStop @ 0x1C00B8300 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00E35B8 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00E3654 (ndisIfUpdateL2MtuSizeAndNotify.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v8; // edx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx

  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop(a1, 11);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    if ( a1 )
      WPP_SF_Zq(0xB9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, &a1->pAdapterInstanceName->Length, a1);
    else
      WPP_SF_Zq(0xB9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, 0LL, 0LL);
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
    v8 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v8;
    ndisIfUpdateL2MtuSizeAndNotify((__int64)IfBlock, v8);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, ~a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    WPP_SF_Zq(0xBAu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, &a1->pAdapterInstanceName->Length, a1);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v9);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}
