/*
 * XREFs of ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C920
 * Callers:
 *     ??0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C86C (--0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C8780 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18005C9F0 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=4
CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct IVolumeStrip *a2)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_DWORD *)this + 14) = 51;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = a2;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 144));
  *((_QWORD *)this + 18) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
  }
  return this;
}
