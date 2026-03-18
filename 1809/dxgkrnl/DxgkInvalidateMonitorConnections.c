/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00B3DE0
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00B3CA0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023B0F4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-89h] BYREF
  __int64 v12; // [rsp+28h] [rbp-81h]
  char v13; // [rsp+30h] [rbp-79h]
  _QWORD v14[12]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v15[10]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v15, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v11 = -1;
  v12 = 0LL;
  v15[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 37;
  LOBYTE(v15[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2165);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2165);
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v10 + 24) = 2777LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[6]) |= 2u;
  memset(&v14[1], 0, 36);
  v14[0] = 0x6000000002LL;
  v14[7] = a1;
  LODWORD(v14[10]) = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v11);
  return v6;
}
