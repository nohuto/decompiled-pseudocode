/*
 * XREFs of ??_ESpatialAudioPositionCalc@@UEAAPEAXI@Z @ 0x180046460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioPositionCalc *__fastcall SpatialAudioPositionCalc::`vector deleting destructor'(
        SpatialAudioPositionCalc *this,
        char a2)
{
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_DWORD *)this + 11) = -1073741823;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
