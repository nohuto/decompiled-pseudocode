/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C013DDA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018E60 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0018F30 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00D1E80 (DxgkInvalidateMonitorConnections.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  const GUID *v1; // r8
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v15; // [rsp+20h] [rbp-39h] BYREF
  __int64 v16; // [rsp+28h] [rbp-31h]
  char v17; // [rsp+30h] [rbp-29h]
  _QWORD v18[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v19[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v15 = -1;
  v16 = 0LL;
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 38;
  LOBYTE(v19[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2173LL);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0LL) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = 7411LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = 7415LL;
    v18[0] = 0LL;
    v18[1] = v19;
    v10 = DXGGLOBAL::GetGlobal(v9, v8);
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v10,
           (__int64)CompleteTopologyTransitionCallback,
           (__int64)v18,
           4);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v18);
  }
  DxgkInvalidateMonitorConnections(1LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v11);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v15);
  return (unsigned int)v2;
}
