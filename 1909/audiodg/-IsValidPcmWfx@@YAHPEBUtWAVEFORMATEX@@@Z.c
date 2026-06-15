/*
 * XREFs of ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14001440C
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidPcmWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v2; // r9d
  int nBlockAlign; // edx
  DWORD v4; // ecx

  v2 = 0;
  if ( a1->nChannels && (((a1->wBitsPerSample - 8) & 0xFFF7) == 0 || ((a1->wBitsPerSample - 24) & 0xFFF7) == 0) )
  {
    nBlockAlign = a1->nBlockAlign;
    if ( nBlockAlign == a1->nChannels * (a1->wBitsPerSample >> 3) )
    {
      v4 = nBlockAlign * a1->nSamplesPerSec;
      v2 = 1;
      if ( a1->nAvgBytesPerSec > v4 / 0x14 + v4 || a1->nAvgBytesPerSec < v4 - v4 / 0x14 )
        return 0;
    }
  }
  return v2;
}
