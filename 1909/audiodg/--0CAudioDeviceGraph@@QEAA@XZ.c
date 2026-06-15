/*
 * XREFs of ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000E9CC
 * Callers:
 *     ??0?$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x14001093C (--0-$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140025F40 (--0-$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E274 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0DurationTracker@CAudioDeviceGraph@@QEAA@XZ @ 0x14000EB04 (--0DurationTracker@CAudioDeviceGraph@@QEAA@XZ.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
CAudioDeviceGraph *__fastcall CAudioDeviceGraph::CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  *((_DWORD *)this + 6) = 0;
  memset_0((char *)this + 32, 0, 0x28uLL);
  *((_BYTE *)this + 72) = 0;
  CAudioDeviceGraph::DurationTracker::DurationTracker((CAudioDeviceGraph *)((char *)this + 80));
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 10;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 216));
  *((_DWORD *)this + 64) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 264), 0, 0);
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((GUID *)this + 22) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  return this;
}
