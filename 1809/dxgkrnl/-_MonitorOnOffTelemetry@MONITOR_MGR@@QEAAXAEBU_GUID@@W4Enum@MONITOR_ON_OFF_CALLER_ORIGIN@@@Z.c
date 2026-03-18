/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0145A98
 * Callers:
 *     LogMonitorOnOffTelemetry @ 0x1C0145A18 (LogMonitorOnOffTelemetry.c)
 * Callees:
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0133E70 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = (struct _FAST_MUTEX *)(a1 + 168);
  if ( a1 == -168 )
  {
    v13 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireGuardedMutex(v3);
  v8 = a1 + 128;
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9 != a1 + 128 )
  {
    v10 = v9 - 16;
    if ( !v9 )
      v10 = 0LL;
    while ( v10 )
    {
      v11 = (struct _ERESOURCE *)(v10 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v10 + 296), 1u);
      DXGMONITOR::LogMonitorObjectOnOffState((char *)v10, a2, 0, a3);
      v12 = *(_QWORD *)(v10 + 16);
      if ( v12 == v8 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = v12 - 16;
        if ( !v12 )
          v10 = 0LL;
      }
      ExReleaseResourceLite(v11);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(v3);
}
