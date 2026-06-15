/*
 * XREFs of ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140057650
 * Callers:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057728 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140057360 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
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
  *((_QWORD *)this + 115) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 116) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_BYTE *)this + 976) = 0;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  result = this;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  return result;
}
