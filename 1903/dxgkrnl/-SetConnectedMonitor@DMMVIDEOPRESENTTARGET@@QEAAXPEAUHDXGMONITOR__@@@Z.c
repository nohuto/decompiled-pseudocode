/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C002276C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C00536FC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C017C870 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     MonitorGetLinkInfoFromMonitor @ 0x1C017CBD0 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C017CC88 (MonitorIsPhysicalMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  *((_BYTE *)this + 414) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 14) = a2;
  if ( !a2 || (int)MonitorGetLinkInfoFromMonitor(a2, (char *)this + 552) < 0 )
  {
    *((_QWORD *)this + 69) = 0LL;
    *((_DWORD *)this + 140) = 0;
  }
}
