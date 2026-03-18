/*
 * XREFs of ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1C0163104
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0092160 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0162DB0 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateGlyphBitsBuffer(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  bool result; // al

  result = 1;
  if ( a4 )
  {
    if ( a2 < 0 )
      return 0;
    if ( a3 < 0 )
      return 0;
    v5 = a4 * (unsigned __int64)(unsigned int)a3;
    if ( v5 > 0xFFFFFFFF )
      return 0;
    v6 = (v5 + 3) & 0xFFFFFFFC;
    if ( v6 < (unsigned int)v5 )
      return 0;
    v7 = a5 + v6;
    if ( v7 < a5 || v7 > a1 )
      return 0;
  }
  return result;
}
