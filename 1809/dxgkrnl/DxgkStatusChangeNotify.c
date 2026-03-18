/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C011DF20
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0013024 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01432B4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0143544 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0qp @ 0x1C0013054 (McTemplateK0qp.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // eax
  unsigned int updated; // ebx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+48h] [rbp-18h]
  char v35; // [rsp+50h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+80h] [rbp+20h] BYREF
  unsigned int ActiveConsoleId; // [rsp+88h] [rbp+28h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+90h] [rbp+30h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2195);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2195);
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp(v7, v6, v8, *a1);
  v9 = *a1;
  if ( *a1 == 1 )
  {
    v14 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v14 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v14);
    updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
    {
      v17 = WdLogNewEntry5_WdEvent(v16, v15);
      *(_QWORD *)(v17 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v17);
      v18 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
LABEL_16:
      v19 = ZwUpdateWnfStateData(v18, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
      v21 = v19;
      if ( v19 >= 0 )
        goto LABEL_11;
      v31 = WdLogNewEntry5_WdError(v20);
      v32 = ActiveConsoleId;
      goto LABEL_31;
    }
  }
  else
  {
    if ( v9 <= 1 )
      goto LABEL_30;
    if ( v9 <= 6 )
    {
LABEL_10:
      updated = 0;
      goto LABEL_11;
    }
    if ( v9 == 7 )
      goto LABEL_18;
    if ( v9 <= 10 )
      goto LABEL_10;
    if ( v9 == 11 )
    {
LABEL_18:
      v22 = WdLogNewEntry5_WdEvent(v7, v6);
      *(_QWORD *)(v22 + 24) = ProcessSessionId;
      WdLogEvent5_WdEvent(v22);
      updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ServerSiloServiceSessionId == -1 )
      {
        v31 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v31 + 24) = ProcessSessionId;
LABEL_32:
        WdLogEvent5_WdError(v31);
        goto LABEL_11;
      }
      if ( ServerSiloServiceSessionId != ProcessSessionId )
      {
        v24 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
        v21 = v24;
        if ( v24 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v25);
          v32 = ServerSiloServiceSessionId;
LABEL_31:
          *(_QWORD *)(v31 + 24) = v32;
          *(_QWORD *)(v31 + 32) = v21;
          goto LABEL_32;
        }
      }
      goto LABEL_11;
    }
    if ( v9 != 12 )
    {
LABEL_30:
      v30 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v30 + 24) = *a1;
      WdLogEvent5_WdAssertion(v30);
      updated = -1073741637;
      goto LABEL_11;
    }
    v26 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v26 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v26);
    updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
    {
      v29 = WdLogNewEntry5_WdEvent(v28, v27);
      *(_QWORD *)(v29 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v29);
      v18 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
      goto LABEL_16;
    }
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v33);
  return updated;
}
