/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14000E1D0
 * Callers:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14000E8EC (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004CFCC (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14000DFFC (--0CCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E274 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((CCrossProcessBaseEndpoint *)((char *)this + 16));
  *((_QWORD *)this + 8) = 0LL;
  CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger((CCrossProcessBaseEndpoint *)((char *)this + 200));
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 1;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return this;
}
