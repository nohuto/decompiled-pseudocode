/*
 * XREFs of cjGlyphDataSimulated @ 0x1C02278E4
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 *     BmfdOpenFontContext @ 0x1C0227158 (BmfdOpenFontContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjGlyphDataSimulated(__int64 a1, int a2, int a3, int *a4, int a5)
{
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax

  if ( a2 )
  {
    v6 = *(_DWORD *)(a1 + 12) & 0x6000;
    if ( v6 )
    {
      if ( v6 == 0x2000 )
      {
        v5 = a2 + 1;
      }
      else
      {
        v7 = a3 + 1;
        if ( v6 == 0x4000 )
          v7 = a3 - 1;
        v5 = a2 + (v7 >> 1);
      }
    }
    else
    {
      v5 = a2;
    }
  }
  else
  {
    a3 = 1;
    v5 = 1;
  }
  if ( a4 )
    *a4 = v5;
  if ( a5 && (a5 == 900 || a5 == 2700) )
    v8 = v5 * ((unsigned int)(a3 + 7) >> 3);
  else
    v8 = a3 * ((unsigned int)(v5 + 7) >> 3);
  return ((v8 + 3) & 0xFFFFFFFC) + 16;
}
