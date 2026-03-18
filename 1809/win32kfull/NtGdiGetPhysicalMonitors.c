/*
 * XREFs of NtGdiGetPhysicalMonitors @ 0x1C0256530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetPhysicalMonitors(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int PhysicalMonitorObjects; // ebx

  OPM::CMutex::Lock((OPM::CMutex *)qword_1C0317778);
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1LL, 1LL, 1LL, a2, a3, a4);
    ReleaseUserCriticalSection();
  }
  OPM::CMutex::Unlock((OPM::CMutex *)qword_1C0317778);
  return (unsigned int)PhysicalMonitorObjects;
}
