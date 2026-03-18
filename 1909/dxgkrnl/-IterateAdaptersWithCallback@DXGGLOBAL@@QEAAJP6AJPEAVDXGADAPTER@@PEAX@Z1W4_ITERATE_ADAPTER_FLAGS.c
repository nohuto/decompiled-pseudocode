/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C001EE10 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5EB0 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C870C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CF5E4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00D2514 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00D4770 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D8298 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00D8E04 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00DA5EC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01400C0 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkPreSessionDisconnected @ 0x1C01407E0 (DxgkPreSessionDisconnected.c)
 *     DxgkCompleteTopologyTransition @ 0x1C0140DA0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0141040 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01436C0 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01450D0 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkInternalDeviceIoctl @ 0x1C0146460 (DxgkInternalDeviceIoctl.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C014E988 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01504A0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0152920 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C015A148 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01839B0 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EF618 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0244688 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C02613C0 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C0276680 (DxgkProcessLockScreen.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C028C640 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C0296334 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C53D8 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5524 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000A500 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000A544 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C0102410 (-DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0141170 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rax
  unsigned int v10; // r13d
  DXGSESSIONDATA *CurrentSessionData; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // r12
  _QWORD *v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rbx
  struct DXGPROCESS *Current; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  DXGADAPTER *v24; // rcx
  struct _LUID *v25; // rdx
  DXGADAPTER *v26; // rcx
  bool v27; // zf
  _QWORD *i; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  char v31; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall *v33)(_QWORD *, __int64); // [rsp+88h] [rbp+10h]
  __int64 v34; // [rsp+90h] [rbp+18h]

  v34 = a3;
  v33 = (__int64 (__fastcall *)(_QWORD *, __int64))a2;
  v4 = 0;
  v30 = a1 + 408;
  v31 = 0;
  if ( a1 == -408 )
  {
    v7 = WdLogNewEntry5_WdAssertion(-408LL, a2);
    *(_QWORD *)(v7 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v7);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v30 + 16) == CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v9 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = 0;
  CurrentSessionData = DxgkQueryCurrentSessionData((__int64)CurrentThread, a2);
  if ( a4 != 5 || (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
    v12 = (_QWORD *)(a1 + 448);
    v13 = *(_QWORD **)(a1 + 448);
    for ( i = (_QWORD *)(a1 + 448); ; v12 = i )
    {
      do
      {
LABEL_8:
        if ( v13 == v12 || !v13 || v10 )
        {
          v4 = v10;
          goto LABEL_46;
        }
        v14 = v13;
        v13 = (_QWORD *)*v13;
        _m_prefetchw(v14 + 3);
        v15 = v14[3];
      }
      while ( !v15 );
      while ( 1 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
        if ( v16 == v15 )
          break;
        if ( !v15 )
          goto LABEL_44;
      }
      switch ( a4 )
      {
        case 4:
          if ( !DXGADAPTER::IsDisplayOnlyAdapter((DXGADAPTER *)v14)
            && (!v14[319]
             || CurrentSessionData && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v14)) )
          {
            goto LABEL_42;
          }
          v17 = v14[536];
          v32 = 0LL;
          Current = DXGPROCESS::GetCurrent();
          CurrentProcess = PsGetCurrentProcess(v20, v19);
          if ( (unsigned int)PsGetProcessSessionId(CurrentProcess) )
          {
            if ( Current && (v22 = *((_QWORD *)Current + 12)) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v22 + 224))(0LL, &v32, 0LL);
              v23 = v32;
            }
            else
            {
              v23 = 0LL;
              v32 = 0LL;
            }
            if ( v23 != v17 )
              goto LABEL_42;
          }
LABEL_41:
          v10 = v33(v14, v34);
          goto LABEL_42;
        case 5:
          if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v14) )
            goto LABEL_39;
          if ( !DXGADAPTER::IsDisplayOnlyAdapter(v24) )
            goto LABEL_42;
          v27 = !DXGADAPTER::IsAddapterSessionized(v26, v25, 0LL, 0LL);
          break;
        case 1:
          if ( v14[319] )
            goto LABEL_39;
          goto LABEL_42;
        default:
          if ( a4 == 2 && DXGADAPTER::IsDisplayOnlyAdapter((DXGADAPTER *)v14) )
            goto LABEL_42;
          if ( a4 != 3 )
          {
LABEL_39:
            if ( CurrentSessionData
              && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v14) )
            {
              goto LABEL_42;
            }
            goto LABEL_41;
          }
          v27 = v14[319] == 0LL;
          break;
      }
      if ( v27 )
        goto LABEL_39;
LABEL_42:
      v12 = i;
      if ( _InterlockedExchangeAdd64(v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_8;
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v14[2], (struct DXGADAPTER *)v14);
LABEL_44:
      ;
    }
  }
LABEL_46:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v30);
  return v4;
}
