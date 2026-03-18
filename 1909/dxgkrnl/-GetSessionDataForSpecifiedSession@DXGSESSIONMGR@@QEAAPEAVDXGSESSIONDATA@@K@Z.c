/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1C00C6070 (DxgkNotifySessionStateChange.c)
 *     DxgkDisplayOnOff @ 0x1C00C6EF0 (DxgkDisplayOnOff.c)
 *     DxgkDispMgrOperation @ 0x1C00C8C40 (DxgkDispMgrOperation.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC96C (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CE2F0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CFA78 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00CFCA4 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00CFD84 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00D1BF4 (OutputDuplProcessTerminate.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3D80 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00D44F4 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D45C8 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E7BC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E9110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E9A80 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E9B50 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00FA354 (--1DXGPROCESS@@MEAA@XZ.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012D058 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012D610 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C0140BC0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0140C18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01450D0 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0147CB4 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C014C3F0 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C014E660 (DxgkRegisterDwmProcess.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014F660 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014F980 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C014FC34 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C015008C (DxgkDestroyCsrssProcess.c)
 *     DxgkGetScanLine @ 0x1C0151A40 (DxgkGetScanLine.c)
 *     DxgkGetAdapter @ 0x1C0159F60 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C015A0F0 (DxgkReleaseAdapter.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C015A148 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C015AC10 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C016DB10 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C02186AC (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234BF4 (DxgkIddHandleSetDisplayConfig.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C023D0C0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257BA0 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C0263EB8 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C026406C (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C0264220 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0265940 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265D00 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0266148 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02662DC (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02663D0 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0266600 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C0266A70 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0267790 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0272138 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0272A64 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C02779D0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0278650 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0278904 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02796AC (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0279A14 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02852BC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C028C984 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0291260 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailConnect @ 0x1C0294250 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0294660 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0294980 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
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
    *(_QWORD *)(v16 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v25[2] == CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v17 + 24) = 667LL;
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
      *(_QWORD *)(v20 + 24) = 559LL;
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
      *(_QWORD *)(v21 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v22 + 24) = 584LL;
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
    *(_QWORD *)(v24 + 24) = 603LL;
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
