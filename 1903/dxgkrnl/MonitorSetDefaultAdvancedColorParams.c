/*
 * XREFs of MonitorSetDefaultAdvancedColorParams @ 0x1C02CA220
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014AE94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02CDF68 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02D07E4 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  struct DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v13 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
  if ( (int)result >= 0 )
  {
    v4 = v13;
    if ( !v13 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v3, v2);
      WdLogEvent5_WdAssertion(v5);
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v4 + 296), 1u);
    DXGMONITOR::_SetColorPrimariesToBT709(v4);
    *((_BYTE *)v4 + 692) = 0;
    *((_DWORD *)v4 + 167) = 2700000;
    *((_DWORD *)v4 + 166) = 5000;
    *((_DWORD *)v4 + 169) = 5000;
    *((_DWORD *)v4 + 168) = 2700000;
    *((_DWORD *)v4 + 170) = 2700000;
    *((_DWORD *)v4 + 171) = 2700000;
    *((_DWORD *)v4 + 174) = 3;
    DXGMONITOR::SetSDRWhiteLevel(v4, 0x3E8u);
    DXGMONITOR::_SendAdjustedHDRParamsToDriver(v4, 0, 0, v9);
    v10 = (struct _ERESOURCE *)((char *)v4 + 296);
    v12 = v11;
    ExReleaseResourceLite(v10);
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
