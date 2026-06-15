/*
 * XREFs of ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400592D4
 * Callers:
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x140059454 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140059598 (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400055A0 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x1400352D0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??0PingPongState@@QEAA@XZ @ 0x140059718 (--0PingPongState@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14005B19C (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_BYTE *)this + 72) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((_QWORD *)this + 20, (__int64)&ATL::g_strmgr);
  PingPongState::PingPongState((CSpatialCrossProcessBaseEndpoint *)((char *)this + 168));
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 336), 0, 0);
  *((_QWORD *)this + 47) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 384));
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 227) = 1;
  return this;
}
