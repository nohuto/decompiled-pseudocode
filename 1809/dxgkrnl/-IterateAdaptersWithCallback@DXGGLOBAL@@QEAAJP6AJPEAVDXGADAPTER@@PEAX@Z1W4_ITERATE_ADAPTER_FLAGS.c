/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C001E950 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C00B389C (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B3940 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00B3CA0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C6FF0 (DxgkGetDisplayConfigBufferSizes.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00C7500 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00C7FAC (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00C95D8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C99F4 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00CB97C (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0132100 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkInternalDeviceIoctl @ 0x1C0132420 (DxgkInternalDeviceIoctl.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C0135FE4 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C0138B30 (DxgkPreSessionDisconnected.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C013A264 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C013BC60 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C013DF50 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkGetAdapter @ 0x1C0144330 (DxgkGetAdapter.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C015E660 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C022867C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C022C4B0 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C0240E30 (DxgkProcessLockScreen.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z @ 0x1C025F6E0 (-Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028CAA4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CB4C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CBF0 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000E73C (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v7; // r13d
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rsi
  struct DXGPROCESS *Current; // r15
  __int64 CurrentProcess; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  char v27; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall *v29)(_QWORD *, __int64); // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v26 = a1 + 408;
  v27 = 0;
  if ( a1 == -408 )
  {
    v23 = WdLogNewEntry5_WdAssertion(-408LL);
    *(_QWORD *)(v23 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v26 + 8) == CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v24 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v7 = 0;
  if ( (PEPROCESS)PsGetCurrentProcess() == PsInitialSystemProcess
    || (v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess) + 77)) == 0LL )
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
  v12 = (_QWORD *)(a1 + 448);
  v13 = *(_QWORD **)(a1 + 448);
  v25 = (_QWORD *)(a1 + 448);
  while ( v13 != v12 && v13 && !v7 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    _m_prefetchw(v14 + 3);
    v15 = v14[3];
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
        if ( v16 == v15 )
          break;
        if ( !v15 )
          goto LABEL_45;
      }
      if ( a4 == 4 )
      {
        if ( v14[316]
          && (!v14[315]
           || SessionDataForSpecifiedSession
           && !DXGSESSIONDATA::CanEnumerateAdapter(SessionDataForSpecifiedSession, (struct DXGADAPTER *)v14)) )
        {
          goto LABEL_25;
        }
        v17 = v14[537];
        Current = DXGPROCESS::GetCurrent();
        CurrentProcess = PsGetCurrentProcess();
        if ( (unsigned int)PsGetProcessSessionId(CurrentProcess) )
        {
          if ( Current && (v20 = *((_QWORD *)Current + 13)) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v20 + 224))(0LL, &v28, 0LL);
            v21 = v28;
          }
          else
          {
            v21 = 0;
            v28 = 0LL;
          }
          if ( __PAIR64__(HIDWORD(v28), v21) != v17 )
            goto LABEL_25;
        }
      }
      else if ( a4 == 1 && !v14[315]
             || a4 == 2 && !v14[316]
             || a4 == 3 && v14[315]
             || SessionDataForSpecifiedSession
             && !DXGSESSIONDATA::CanEnumerateAdapter(SessionDataForSpecifiedSession, (struct DXGADAPTER *)v14) )
      {
        goto LABEL_25;
      }
      v7 = v29(v14, v30);
LABEL_25:
      v12 = v25;
      if ( _InterlockedExchangeAdd64(v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        continue;
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v14[2], (struct DXGADAPTER *)v14);
LABEL_45:
      v12 = v25;
    }
  }
  if ( v27 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
  return v7;
}
