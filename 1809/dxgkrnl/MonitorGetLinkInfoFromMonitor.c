/*
 * XREFs of MonitorGetLinkInfoFromMonitor @ 0x1C00B79F4
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0001FF0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromMonitor(struct HDXGMONITOR__ *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( !v11 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    if ( (*((_DWORD *)v6 + 10) & 0x400) != 0 )
    {
      *(_QWORD *)a2 = *(_QWORD *)((char *)v6 + 468);
      v7 = *((_DWORD *)v6 + 119);
    }
    else
    {
      v7 = 0;
      v2 = -1073741275;
      *(_QWORD *)a2 = 0LL;
    }
    *(_DWORD *)(a2 + 8) = v7;
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return v2;
  }
  return result;
}
