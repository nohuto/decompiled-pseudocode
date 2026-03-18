/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0001FF0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004C4C4 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorIsPhysicalMonitor @ 0x1C00B7964 (MonitorIsPhysicalMonitor.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C00B79F4 (MonitorGetLinkInfoFromMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  ReferenceCounted *v4; // rcx

  *((_BYTE *)this + 414) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 14) = a2;
  if ( !a2 || (int)MonitorGetLinkInfoFromMonitor(a2, (char *)this + 544) < 0 )
  {
    *((_QWORD *)this + 68) = 0LL;
    *((_DWORD *)this + 138) = 0;
  }
  v4 = (ReferenceCounted *)*((_QWORD *)this + 67);
  if ( v4 )
  {
    ReferenceCounted::Release(v4);
    *((_QWORD *)this + 67) = 0LL;
  }
}
