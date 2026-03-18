/*
 * XREFs of MonitorSetAppOverride @ 0x1C02CA1D4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02CBBB4 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 */

__int64 __fastcall MonitorSetAppOverride(struct HDXGMONITOR__ *a1, GUID *a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  GUID Guid; // [rsp+20h] [rbp-28h] BYREF
  struct DXGMONITOR *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18);
  if ( (int)result >= 0 )
  {
    v11 = v18;
    if ( !v18 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v12);
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v11 + 296), 1u);
    Guid = *a2;
    v16 = DXGMONITOR::_SetAppOverride(v11, &Guid, a3, a4);
    if ( v16 < 0 )
      v4 = v16;
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
    KeLeaveCriticalRegion();
    return v4;
  }
  return result;
}
