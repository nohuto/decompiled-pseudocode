/*
 * XREFs of ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x1C023E438
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C023E310 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C023E3B8 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
        struct CMutex **this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  NTSTATUS v11; // ebx
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)v13, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v11 = -1071774323;
  }
  else
  {
    v11 = AcquireCriticalSectionAndCheckState();
    if ( v11 >= 0 )
    {
      v11 = CallMonitor(this[2], a2, a4, a5, a6, a7);
      ReleaseUserCriticalSection();
      if ( v11 >= 0 && a3.QuadPart < 0 )
      {
        Interval = a3;
        v11 = KeDelayExecutionThread(0, NOT_ALERTABLE, &Interval);
      }
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)v13);
  return (unsigned int)v11;
}
