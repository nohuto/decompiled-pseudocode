/*
 * XREFs of ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140059598
 * Callers:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140059684 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400592D4 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint *result; // rax

  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 114) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  memset_0((char *)this + 1000, 0, 0x30uLL);
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  result = this;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  return result;
}
