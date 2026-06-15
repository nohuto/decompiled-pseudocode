/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x18002D1D0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800C6EF8 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0critical_section@wil@@QEAA@K@Z @ 0x18004915C (--0critical_section@wil@@QEAA@K@Z.c)
 *     ?UpdateLastInactivationTime@CAudioSession@@QEAAXXZ @ 0x180064738 (-UpdateLastInactivationTime@CAudioSession@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
  unsigned int v2; // edx

  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 48));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 200));
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 78) = 180000;
  *((_QWORD *)this + 40) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 41) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 352));
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 432));
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_BYTE *)this + 484) = 0;
  *((_QWORD *)this + 61) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 496));
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 616));
  wil::critical_section::critical_section((CAudioSession *)((char *)this + 656), v2);
  *((_QWORD *)this + 87) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 88) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 89) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 92) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_DWORD *)this + 186) = 0;
  *((GUID *)this + 45) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 189) = -1;
  *((_DWORD *)this + 188) = 0;
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 96) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 776), 0, 0);
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_BYTE *)this + 840) = 1;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 848));
  *((_QWORD *)this + 111) = 1065353216LL;
  *((_QWORD *)this + 113) = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 936));
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 113) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_DWORD *)this + 250) = 0;
  *((_QWORD *)this + 126) = 0LL;
  *((_BYTE *)this + 1016) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
  CAudioSession::UpdateLastInactivationTime(this);
  return this;
}
