/*
 * XREFs of MonitorGetNativeFlags @ 0x1C00C44D4
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0004CF8 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(struct HDXGMONITOR__ *a1, unsigned __int8 *a2, bool *a3, bool *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  DXGMONITOR *v9; // rbx
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGMONITOR *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    if ( !v16 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v9, a2, a3, a4);
    v11 = (struct _ERESOURCE *)((char *)v9 + 296);
    v12 = MonitorNativeFlags;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
