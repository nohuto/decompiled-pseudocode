/*
 * XREFs of ??0CAudioSrv@@QEAA@XZ @ 0x180060EA0
 * Callers:
 *     ServiceStart @ 0x180060AA0 (ServiceStart.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800500D4 (--0CSerialWorkQueue@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSrv *__fastcall CAudioSrv::CAudioSrv(CAudioSrv *this)
{
  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 10;
  *((_QWORD *)this + 25) = 0LL;
  CSerialWorkQueue::CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  return this;
}
