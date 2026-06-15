/*
 * XREFs of ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005F2F4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

CAudioHealthMonitor *__fastcall CAudioHealthMonitor::CAudioHealthMonitor(CAudioHealthMonitor *this, int a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CAudioHealthMonitor::`vftable';
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 16;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *((_DWORD *)this + 16) = 0;
  return this;
}
