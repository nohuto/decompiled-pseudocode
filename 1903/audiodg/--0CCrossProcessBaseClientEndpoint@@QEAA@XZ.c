/*
 * XREFs of ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004D0EC
 * Callers:
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14004D160 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004D208 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14000E1E0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CCrossProcessBaseClientEndpoint *__fastcall CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 51) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 52) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  return this;
}
