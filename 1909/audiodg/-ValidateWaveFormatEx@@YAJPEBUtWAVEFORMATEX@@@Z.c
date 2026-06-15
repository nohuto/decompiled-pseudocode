/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140006FC0
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400146FC (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400148D8 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140052BB8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
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
  __int64 v7; // rdx
  __int64 v8; // rax
  WORD wBitsPerSample; // ax
  WORD v10; // dx
  bool v11; // zf

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
    v11 = nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3;
LABEL_24:
    if ( v11 )
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
      goto LABEL_16;
    v7 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
    {
LABEL_16:
      v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v8 )
        v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( v8 )
      {
        wBitsPerSample = a1->wBitsPerSample;
        v10 = wBitsPerSample;
        if ( wBitsPerSample != 32 )
        {
          v10 = a1->wBitsPerSample;
          if ( wBitsPerSample != 64 )
            return (unsigned int)-2147024809;
        }
      }
      else
      {
        v10 = a1->wBitsPerSample;
        if ( ((v10 - 8) & 0xFFE7) != 0 )
          return (unsigned int)-2147024809;
      }
      if ( !a1[1].wFormatTag || v10 < a1[1].wFormatTag || nAvgBytesPerSec != (nSamplesPerSec * v10 * nChannels) >> 3 )
        return (unsigned int)-2147024809;
      v11 = nBlockAlign == v10 * nChannels / 8;
      goto LABEL_24;
    }
  }
  return v1;
}
