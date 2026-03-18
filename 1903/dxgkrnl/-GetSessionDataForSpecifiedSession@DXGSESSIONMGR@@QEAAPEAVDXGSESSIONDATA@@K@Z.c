/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1C00C52F0 (DxgkNotifySessionStateChange.c)
 *     DxgkDisplayOnOff @ 0x1C00C6170 (DxgkDisplayOnOff.c)
 *     DxgkDispMgrOperation @ 0x1C00C7EC0 (DxgkDispMgrOperation.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC4BC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CCDC0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00CD7AC (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CDBBC (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CEA98 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00CECC4 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF7E4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3530 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00D3CA4 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D3D78 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D6BE8 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC990 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00F3820 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00F38F0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F5684 (--1DXGPROCESS@@MEAA@XZ.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012B1B8 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012B70C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C012C9C0 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C013DBC0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C013DC18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0141680 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0144114 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01486E0 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C0149330 (OutputDuplProcessTerminate.c)
 *     DxgkRegisterDwmProcess @ 0x1C014A820 (DxgkRegisterDwmProcess.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014B8A0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014BBC0 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C014BE24 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C014C1CC (DxgkDestroyCsrssProcess.c)
 *     DxgkGetScanLine @ 0x1C014DB80 (DxgkGetScanLine.c)
 *     DxgkGetAdapter @ 0x1C01560A0 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0156230 (DxgkReleaseAdapter.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C0156288 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C0156D50 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0169D20 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202490 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C021803C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C023CA50 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257520 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C0263828 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C02639DC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C0263B90 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02652B0 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265670 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0265AB8 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0265C4C (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0265D40 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0265F70 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02663E0 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0267100 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026DFFC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271A10 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C027233C (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0277270 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0277EF0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C02781A4 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0278F4C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C02792B4 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0284EFC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C028C574 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0290E50 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailConnect @ 0x1C0293E40 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0294250 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0294570 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // eax
  __int64 v10; // rdi
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdx
  int v13; // edx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  struct _KTHREAD **v25; // [rsp+20h] [rbp-18h] BYREF
  char v26; // [rsp+28h] [rbp-10h]

  v2 = (unsigned int)a2;
  v25 = (struct _KTHREAD **)((char *)this + 80);
  v26 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(-80LL, a2);
    *(_QWORD *)(v16 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v25[2] == CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v17 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v26 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v18[5] = &v25;
    v18[3] = 275LL;
    v18[4] = 4LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v5 = v25;
  KeEnterCriticalRegion();
  if ( v5[2] == KeGetCurrentThread() )
  {
    v19 = *((_DWORD *)v5 + 6);
    if ( v19 <= 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v20 + 24) = 558LL;
      WdLogEvent5_WdAssertion(v20);
      v19 = *((_DWORD *)v5 + 6);
    }
    v9 = v19 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_DWORD *)v5 + 7);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, &EventBlockThread, v8, v15);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 1);
      ExAcquirePushLockExclusiveEx(v5, 0LL);
    }
    if ( v5[2] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v21 + 24) = 582LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v22 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v5[2] = KeGetCurrentThread();
    v9 = 1;
  }
  *((_DWORD *)v5 + 6) = v9;
  v26 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
  v11 = v25;
  v26 = 0;
  if ( v25[2] != KeGetCurrentThread() )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = v11;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v12 = *((unsigned int *)v11 + 6);
  if ( (int)v12 <= 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7, v12);
    *(_QWORD *)(v24 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v24);
    LODWORD(v12) = *((_DWORD *)v11 + 6);
  }
  v13 = v12 - 1;
  *((_DWORD *)v11 + 6) = v13;
  if ( !v13 )
  {
    v11[2] = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v10;
}
