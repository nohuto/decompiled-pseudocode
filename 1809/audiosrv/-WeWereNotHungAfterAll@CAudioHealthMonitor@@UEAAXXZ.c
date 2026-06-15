/*
 * XREFs of ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ @ 0x1800AF330
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioHealthMonitor::WeWereNotHungAfterAll(CAudioHealthMonitor *this)
{
  int v2; // edx
  int v3; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    v3 = v2 - 1;
  else
    v3 = -1;
  if ( v2 )
    *((_DWORD *)this + 2) = v3;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
