/*
 * XREFs of ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00D0630
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D0304 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012AAFC (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C012BA78 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02B93A0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02BB03C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  v3 = *((_QWORD *)this + 1);
  if ( !v3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
    v3 = *((_QWORD *)this + 1);
  }
  return MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v3 + 16));
}
