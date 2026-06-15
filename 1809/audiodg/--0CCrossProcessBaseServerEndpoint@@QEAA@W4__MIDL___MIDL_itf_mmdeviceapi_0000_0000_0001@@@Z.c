/*
 * XREFs of ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1400052EC
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x1400055CC (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x14004F838 (--0CCrossProcessServerOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140005364 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2)
{
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *((_DWORD *)this + 112) = a2;
  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &CCrossProcessBaseServerEndpoint::`vftable';
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = 0LL;
  return this;
}
