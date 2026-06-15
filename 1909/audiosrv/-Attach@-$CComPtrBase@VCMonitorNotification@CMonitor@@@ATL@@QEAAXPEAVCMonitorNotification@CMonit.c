/*
 * XREFs of ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18010DC00
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010E0A0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18010C270 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

__int64 __fastcall ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
        CMonitor::CMonitorNotification **a1,
        CMonitor::CMonitorNotification *a2)
{
  CMonitor::CMonitorNotification *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CMonitor::CMonitorNotification::Release(v4);
  *a1 = a2;
  return result;
}
