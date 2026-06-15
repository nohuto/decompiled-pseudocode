/*
 * XREFs of ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800FFB04
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800FF934 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180103E10 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::StopIfRunning(CMonitor *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v3; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) == 3 )
    CMonitor::Stop(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
