/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000D45C
 * Callers:
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400019E0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400555A8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r9
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // r11d
  WORD nBlockAlign; // di
  __int64 v6; // rdx
  __int64 v7; // rax
  WORD v8; // dx
  bool v9; // zf
  __int64 v11; // rdx
  WORD wBitsPerSample; // ax

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !nBlockAlign || a1->cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( a1->cbSize || (a1->wBitsPerSample & 7) != 0 || nChannels > 2u )
      return (unsigned int)-2147024809;
    v9 = nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3;
LABEL_21:
    if ( v9 )
      return v1;
    return (unsigned int)-2147024809;
  }
  if ( a1->wFormatTag == 0xFFFE )
  {
    if ( a1->cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v6 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v6 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v6 )
      goto LABEL_13;
    v11 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v11 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v11 )
    {
LABEL_13:
      v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v7 )
        v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( v7 )
      {
        wBitsPerSample = a1->wBitsPerSample;
        v8 = wBitsPerSample;
        if ( wBitsPerSample != 32 )
        {
          v8 = a1->wBitsPerSample;
          if ( wBitsPerSample != 64 )
            return (unsigned int)-2147024809;
        }
      }
      else
      {
        v8 = a1->wBitsPerSample;
        if ( ((v8 - 8) & 0xFFE7) != 0 )
          return (unsigned int)-2147024809;
      }
      if ( !a1[1].wFormatTag || v8 < a1[1].wFormatTag || nAvgBytesPerSec != (nSamplesPerSec * v8 * nChannels) >> 3 )
        return (unsigned int)-2147024809;
      v9 = nBlockAlign == v8 * nChannels / 8;
      goto LABEL_21;
    }
  }
  return v1;
}
