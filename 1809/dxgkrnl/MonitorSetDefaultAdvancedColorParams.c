/*
 * XREFs of MonitorSetDefaultAdvancedColorParams @ 0x1C02918B0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0297308 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  struct DXGMONITOR *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // eax
  struct _ERESOURCE *v8; // rcx
  unsigned int v9; // ebx
  struct DXGMONITOR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v10 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v10);
  if ( (int)result >= 0 )
  {
    v3 = v10;
    if ( !v10 )
    {
      v4 = WdLogNewEntry5_WdAssertion(v2);
      WdLogEvent5_WdAssertion(v4);
      v6 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v6);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v3 + 296), 1u);
    DXGMONITOR::_SetColorPrimariesToBT709(v3);
    *((_BYTE *)v3 + 688) = 0;
    *((_DWORD *)v3 + 166) = 2700000;
    *((_DWORD *)v3 + 165) = 5000;
    *((_DWORD *)v3 + 168) = 5000;
    *((_DWORD *)v3 + 167) = 2700000;
    *((_DWORD *)v3 + 169) = 2700000;
    *((_DWORD *)v3 + 170) = 2700000;
    *((_DWORD *)v3 + 173) = 3;
    DXGMONITOR::SetSDRWhiteLevel(v3, 0x3E8u);
    v7 = DXGMONITOR::_SendAdjustedHDRParamsToDriver(v3, 0, 0);
    v8 = (struct _ERESOURCE *)((char *)v3 + 296);
    v9 = v7;
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    return v9;
  }
  return result;
}
