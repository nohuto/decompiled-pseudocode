/*
 * XREFs of LogMonitorHandleOnOffState @ 0x1C014A66C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C014A724 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall LogMonitorHandleOnOffState(struct HDXGMONITOR__ *a1, __int64 a2, unsigned int a3)
{
  int MonitorFromHandle; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  struct DXGMONITOR *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v14 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
    v9 = MonitorFromHandle;
    if ( MonitorFromHandle < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v13 + 24) = v9;
      WdLogEvent5_WdError(v13);
    }
    else
    {
      v10 = v14;
      if ( !v14 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v12);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v10 + 296), 1u);
      LOBYTE(v11) = 1;
      DXGMONITOR::LogMonitorObjectOnOffState(v10, a2, a3, v11);
      ExReleaseResourceLite((PERESOURCE)((char *)v10 + 296));
      KeLeaveCriticalRegion();
    }
  }
}
