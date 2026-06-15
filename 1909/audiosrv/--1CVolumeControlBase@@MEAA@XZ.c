/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x1800C4E10
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800C4EDC (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1800C4F90 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     _CVolumeSoftware::CVolumeSoftware_::_1_::dtor$0 @ 0x1800C87DC (_CVolumeSoftware--CVolumeSoftware_--_1_--dtor$0.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800C89B0 (--1CVolumeSoftware@@EEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800BD154 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      -2LL);
  }
  *((_QWORD *)this + 18) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CVolumeControlBase *)((char *)this + 144));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    free(v2);
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    CoTaskMemFree(v3);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
