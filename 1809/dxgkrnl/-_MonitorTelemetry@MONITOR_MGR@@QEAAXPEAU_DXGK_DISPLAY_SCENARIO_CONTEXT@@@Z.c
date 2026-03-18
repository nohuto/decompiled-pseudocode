/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F704
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0255F60 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _FAST_MUTEX *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  ULONG *p_Contention; // r14
  MONITOR_MGR *v10; // rax
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 11560LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v10 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v10 != (MONITOR_MGR *)&this[2].Contention )
  {
    v11 = (char *)v10 - 16;
    if ( !v10 )
      v11 = 0LL;
    while ( v11 )
    {
      v12 = v11;
      if ( *((_DWORD *)v11 + 108) != 1 && *((_QWORD *)v11 + 55) )
        v12 = (char *)*((_QWORD *)v11 + 55);
      if ( !v12 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v13);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v12 + 296), 1u);
      DXGMONITOR::_MonitorTelemetry(v12, 2LL, a2);
      v14 = (char *)*((_QWORD *)v11 + 2);
      if ( v14 == (char *)p_Contention )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = v14 - 16;
        if ( !v14 )
          v11 = 0LL;
      }
      ExReleaseResourceLite((PERESOURCE)(v12 + 296));
      KeLeaveCriticalRegion();
    }
  }
  if ( !v6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(v6);
}
