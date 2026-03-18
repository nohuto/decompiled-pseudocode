/*
 * XREFs of MonitorSetSDRWhiteLevel @ 0x1C0291ABC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C0297170 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0297308 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevel(struct HDXGMONITOR__ *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v5 = v12;
    if ( !v12 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 296), 1u);
    if ( !DXGMONITOR::EdidSupportsHDR(v5) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = DXGMONITOR::SetSDRWhiteLevel(v5, a2);
    if ( v11 >= 0 )
    {
      DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(v5);
      v11 = DXGMONITOR::_SendAdjustedHDRParamsToDriver(v5, 1, 0);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 296));
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  return result;
}
