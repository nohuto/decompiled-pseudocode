/*
 * XREFs of ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140057450
 * Callers:
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x1400575FC (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140057740 (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E284 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0PingPongState@@QEAA@XZ @ 0x1400578AC (--0PingPongState@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x1400592CC (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *(GUID *)((char *)this + 72) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 1;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  PingPongState::PingPongState((CSpatialCrossProcessBaseEndpoint *)((char *)this + 192));
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 352), 0, 0);
  *((_QWORD *)this + 49) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 400));
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_DWORD *)this + 229) = 1;
  return this;
}
