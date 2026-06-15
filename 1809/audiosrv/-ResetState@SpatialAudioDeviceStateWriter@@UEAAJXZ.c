/*
 * XREFs of ?ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180128600
 * Callers:
 *     <none>
 * Callees:
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012C6A4 (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDeviceStateWriter::ResetState(SpatialAudioDeviceStateWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this - 3) = 0LL;
  *((_QWORD *)this - 2) = 0LL;
  *((_QWORD *)this - 1) = 0LL;
  v3 = SpatialAudioStateIO::Store((SpatialAudioDeviceStateWriter *)((char *)this - 568));
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
