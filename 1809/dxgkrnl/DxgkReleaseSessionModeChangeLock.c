/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C00DE760
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D0CA0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ECD5C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C011F0A0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121B30 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 *     DxgkPreSessionDisconnected @ 0x1C0138B30 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0138D00 (DxgkSessionConnected.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C013A1DC (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkSessionReconnected @ 0x1C0144600 (DxgkSessionReconnected.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 CurrentProcessSessionId; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  DXGFASTMUTEX *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  DXGFASTMUTEX *v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( !v2 )
    goto LABEL_21;
  v18 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1);
  v17 = (DXGFASTMUTEX *)(v2 + 80);
  if ( v2 == -80 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v17 + 1) == CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v12 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v18 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v13[5] = &v17;
    v13[3] = 275LL;
    v13[4] = 4LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  DXGFASTMUTEX::Acquire(v17);
  v18 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 72) )
  {
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v17);
LABEL_21:
    v6 = 0LL;
    goto LABEL_16;
  }
  _mm_lfence();
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * CurrentProcessSessionId);
  v7 = v17;
  v18 = 0;
  if ( *((struct _KTHREAD **)v17 + 1) != KeGetCurrentThread() )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5);
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[5] = v7;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  v8 = *((_DWORD *)v7 + 6);
  if ( v8 <= 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v15);
    v8 = *((_DWORD *)v7 + 6);
  }
  v9 = v8 - 1;
  *((_DWORD *)v7 + 6) = v9;
  if ( !v9 )
  {
    *((_QWORD *)v7 + 1) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_16:
  if ( v6 )
  {
    v10 = v6 + 18528;
    if ( *(struct _KTHREAD **)(v6 + 18536) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v6 + 18536) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v10, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v16 + 24) = 222LL;
    WdLogEvent5_WdAssertion(v16);
  }
}
