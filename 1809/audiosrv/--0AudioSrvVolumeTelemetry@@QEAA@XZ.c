/*
 * XREFs of ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18005B75C
 * Callers:
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005B68C (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioSrvVolumeTelemetry *__fastcall AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry(AudioSrvVolumeTelemetry *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  return this;
}
