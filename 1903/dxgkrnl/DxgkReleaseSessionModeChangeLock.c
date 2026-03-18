/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003810 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C6BA0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC4BC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD6EC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3530 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D6BE8 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00F74E0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkUpdateGdiInfo @ 0x1C012AE90 (DxgkUpdateGdiInfo.c)
 *     DxgkPreSessionDisconnected @ 0x1C013D7E0 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C013D9D0 (DxgkSessionConnected.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0144114 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C014AB40 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C014BA00 (DxgkGetDpiOverrideForSource.c)
 *     DxgkSessionReconnected @ 0x1C01567D0 (DxgkSessionReconnected.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E324 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257520 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C0284A3C (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C0285110 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 CurrentProcessSessionId; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  DXGFASTMUTEX *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+20h] [rbp-18h] BYREF
  char v22; // [rsp+28h] [rbp-10h]

  v4 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( !v4 )
    goto LABEL_21;
  v22 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v3, v2);
  v21 = (DXGFASTMUTEX *)(v4 + 80);
  if ( v4 == -80 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, v5);
    *(_QWORD *)(v15 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v21 + 2) == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v16 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v22 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v5);
    v17[5] = &v21;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  DXGFASTMUTEX::Acquire(v21);
  v22 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 72) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v21);
LABEL_21:
    v10 = 0LL;
    goto LABEL_16;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * CurrentProcessSessionId);
  v11 = v21;
  v22 = 0;
  if ( *((struct _KTHREAD **)v21 + 2) != KeGetCurrentThread() )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v18[3] = 275LL;
    v18[4] = 4LL;
    v18[5] = v11;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v12 = *((_DWORD *)v11 + 6);
  if ( v12 <= 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v19 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v19);
    v12 = *((_DWORD *)v11 + 6);
  }
  v13 = v12 - 1;
  *((_DWORD *)v11 + 6) = v13;
  if ( !v13 )
  {
    *((_QWORD *)v11 + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_16:
  if ( v10 )
  {
    v14 = v10 + 18528;
    if ( *(struct _KTHREAD **)(v10 + 18536) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v10 + 18536) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v14, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v20 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v20 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v20);
  }
}
