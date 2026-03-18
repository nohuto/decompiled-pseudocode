/*
 * XREFs of LogMonitorHandleOnOffState @ 0x1C0133DB8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0133E70 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall LogMonitorHandleOnOffState(struct HDXGMONITOR__ *a1, __int64 a2, unsigned int a3)
{
  int MonitorFromHandle; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct DXGMONITOR *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v12 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
    v7 = MonitorFromHandle;
    if ( MonitorFromHandle < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v11 + 24) = v7;
      WdLogEvent5_WdError(v11);
    }
    else
    {
      v8 = v12;
      if ( !v12 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v10);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v8 + 296), 1u);
      LOBYTE(v9) = 1;
      DXGMONITOR::LogMonitorObjectOnOffState(v8, a2, a3, v9);
      ExReleaseResourceLite((PERESOURCE)((char *)v8 + 296));
      KeLeaveCriticalRegion();
    }
  }
}
