/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00BCAEC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CEA74 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00CECA0 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D0CA0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00DB730 (DxgkGetPresentHistory.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E1110 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E11E0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00E8DD4 (OutputDuplProcessTerminate.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00E9490 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ECD5C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C011F0A0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C0130564 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0132100 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C0136F50 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C013782C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C0138ECC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C0139E20 (DxgkRegisterDwmProcess.c)
 *     DxgkDestroyCsrssProcess @ 0x1C013BA34 (DxgkDestroyCsrssProcess.c)
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C013BD50 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 *     DxgkGetAdapter @ 0x1C0144330 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0144510 (DxgkReleaseAdapter.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C0144860 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0153FB8 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C01D2660 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkGetScanLine @ 0x1C01D4A70 (DxgkGetScanLine.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0209E60 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C022F218 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C022F3CC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C022F580 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0230DB0 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0231160 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02315A8 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C023173C (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0231830 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0231A60 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C0231EC0 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0232C4C (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C023D0C8 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C023FEC0 (DxgkCreateOutputDupl.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0241E20 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0242D8C (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0243B38 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0243E90 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C025AB70 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C025C8D0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     NtDxgkVailConnect @ 0x1C025DCC0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C025E0D0 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C025E3F0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v8; // eax
  __int64 v9; // rdi
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rcx
  int v12; // ecx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct _KTHREAD **v24; // [rsp+20h] [rbp-18h] BYREF
  char v25; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v24 = (struct _KTHREAD **)((char *)this + 80);
  v25 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-80LL);
    *(_QWORD *)(v15 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v24[1] == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v16 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v25 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v17[5] = &v24;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v5 = v24;
  KeEnterCriticalRegion();
  if ( v5[1] == KeGetCurrentThread() )
  {
    v18 = *((_DWORD *)v5 + 6);
    if ( v18 <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v19 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v19);
      v18 = *((_DWORD *)v5 + 6);
    }
    v8 = v18 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *((_DWORD *)v5 + 7);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v6, &EventBlockThread, v7, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ExAcquirePushLockExclusiveEx(v5 + 2, 0LL);
    }
    if ( v5[1] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v20 + 24) = 433LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v21 + 24) = 434LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v5[1] = KeGetCurrentThread();
    v8 = 1;
  }
  *((_DWORD *)v5 + 6) = v8;
  v25 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
  v10 = v24;
  v25 = 0;
  if ( v24[1] != KeGetCurrentThread() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6);
    v22[3] = 275LL;
    v22[4] = 4LL;
    v22[5] = v10;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v11 = *((unsigned int *)v10 + 6);
  if ( (int)v11 <= 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v23 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v23);
    LODWORD(v11) = *((_DWORD *)v10 + 6);
  }
  v12 = v11 - 1;
  *((_DWORD *)v10 + 6) = v12;
  if ( !v12 )
  {
    v10[1] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v9;
}
