/*
 * XREFs of ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14000742C
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFloatWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v2; // r9d
  int nBlockAlign; // r10d
  DWORD v4; // ecx

  v2 = 0;
  if ( a1->nChannels )
  {
    if ( ((a1->wBitsPerSample - 32) & 0xFFDF) == 0 )
    {
      nBlockAlign = a1->nBlockAlign;
      if ( nBlockAlign == a1->wBitsPerSample * a1->nChannels / 8 )
      {
        v2 = 1;
        v4 = nBlockAlign * a1->nSamplesPerSec;
        if ( a1->nAvgBytesPerSec > v4 / 0x14 + v4 || a1->nAvgBytesPerSec < v4 - v4 / 0x14 )
          return 0;
      }
    }
  }
  return v2;
}
