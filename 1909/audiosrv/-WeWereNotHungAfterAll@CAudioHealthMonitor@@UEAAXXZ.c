/*
 * XREFs of ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ @ 0x1800BD870
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioHealthMonitor::WeWereNotHungAfterAll(CAudioHealthMonitor *this)
{
  int v2; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    *((_DWORD *)this + 2) = v2 - 1;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
