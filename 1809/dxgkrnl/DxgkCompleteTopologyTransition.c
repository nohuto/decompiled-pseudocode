/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00B3CA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0001B70 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0001C00 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B3DE0 (DxgkInvalidateMonitorConnections.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  const GUID *v1; // r8
  int v2; // ebx
  __int64 v3; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+20h] [rbp-39h] BYREF
  __int64 v15; // [rsp+28h] [rbp-31h]
  char v16; // [rsp+30h] [rbp-29h]
  _QWORD v17[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v18[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v18, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v18[1]);
  v14 = -1;
  v15 = 0LL;
  v18[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v18[3]) = 38;
  LOBYTE(v18[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2173);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(v3);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = 7260LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = 7264LL;
    v17[0] = 0LL;
    v17[1] = v18;
    v10 = DXGGLOBAL::GetGlobal(v9);
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(v10, CompleteTopologyTransitionCallback, v17, 4LL);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v17);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  return (unsigned int)v2;
}
