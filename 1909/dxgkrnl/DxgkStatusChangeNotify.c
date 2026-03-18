/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C00CC350
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001E20 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetDisplayMode @ 0x1C00CCC90 (DxgkSetDisplayMode.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158CF8 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0158F7C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E994 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     McTemplateK0qp @ 0x1C0001E98 (McTemplateK0qp.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
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
  __int64 v15; // rax
  void *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h]
  char v34; // [rsp+50h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+80h] [rbp+20h] BYREF
  unsigned int ActiveConsoleId; // [rsp+88h] [rbp+28h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+90h] [rbp+30h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2195);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2195LL);
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
    v14 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v14 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v14);
    updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
    {
      v15 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v15 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v15);
      v16 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
LABEL_16:
      v17 = ZwUpdateWnfStateData(v16, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
      v20 = v17;
      if ( v17 >= 0 )
        goto LABEL_11;
      v30 = WdLogNewEntry5_WdError(v18, v6, v19);
      v31 = ActiveConsoleId;
      goto LABEL_32;
    }
  }
  else
  {
    if ( v9 <= 1 )
      goto LABEL_31;
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
      v21 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v21 + 24) = ProcessSessionId;
      WdLogEvent5_WdEvent(v21);
      updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ServerSiloServiceSessionId == -1 )
      {
        v30 = WdLogNewEntry5_WdError(v22, v6, v23);
        *(_QWORD *)(v30 + 24) = ProcessSessionId;
LABEL_33:
        WdLogEvent5_WdError(v30);
        goto LABEL_11;
      }
      if ( ServerSiloServiceSessionId != ProcessSessionId )
      {
        v24 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
        v20 = v24;
        if ( v24 < 0 )
        {
          v30 = WdLogNewEntry5_WdError(v25, v6, v26);
          v31 = ServerSiloServiceSessionId;
LABEL_32:
          *(_QWORD *)(v30 + 24) = v31;
          *(_QWORD *)(v30 + 32) = v20;
          goto LABEL_33;
        }
      }
      goto LABEL_11;
    }
    if ( v9 != 12 )
    {
LABEL_31:
      v29 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v29 + 24) = *a1;
      WdLogEvent5_WdAssertion(v29);
      updated = -1073741637;
      goto LABEL_11;
    }
    v27 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v27 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v27);
    updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
    {
      v28 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v28 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v28);
      v16 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
      goto LABEL_16;
    }
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v6);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v32);
  return updated;
}
