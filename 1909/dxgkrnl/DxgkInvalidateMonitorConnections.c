/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C0140EE0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C0140DA0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FF54 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0270860 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0141040 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-89h] BYREF
  __int64 v19; // [rsp+28h] [rbp-81h]
  char v20; // [rsp+30h] [rbp-79h]
  _QWORD v21[12]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v22[10]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v18 = -1;
  v19 = 0LL;
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 37;
  LOBYTE(v22[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v20 = 1;
    v18 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2165);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2165LL);
  v5 = WdLogNewEntry5_WdEvent(v4);
  *(_QWORD *)(v5 + 24) = a1;
  WdLogEvent5_WdEvent(v5);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 2806LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v22);
  memset(v21, 0, sizeof(v21));
  LODWORD(v21[6]) |= 2u;
  memset(&v21[1], 0, 36);
  v21[0] = 0x6000000002LL;
  v21[7] = a1;
  LODWORD(v21[10]) = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, CurrentProcessSessionId, v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v13);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v18);
  return v8;
}
