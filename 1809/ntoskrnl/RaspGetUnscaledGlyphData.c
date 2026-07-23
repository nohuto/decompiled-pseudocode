/*
 * XREFs of RaspGetUnscaledGlyphData @ 0x14017AC78
 * Callers:
 *     RaspRasterize @ 0x14017AA98 (RaspRasterize.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     RaspLoadBearings @ 0x14017B748 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14017B898 (RaspMapGlyphIndexToLocation.c)
 *     RaspConvertDeltas @ 0x14017C1C4 (RaspConvertDeltas.c)
 *     RaspLoadGlyphData @ 0x14017C268 (RaspLoadGlyphData.c)
 *     RaspMapCharacterCodeToGlyphIndex @ 0x14017C300 (RaspMapCharacterCodeToGlyphIndex.c)
 */

__int64 __fastcall RaspGetUnscaledGlyphData(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rcx
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  int v11; // eax
  _QWORD *v12; // r12
  int GlyphData; // eax
  int Bearings; // edi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v9 = 0LL;
  v16 = 0LL;
  v10 = 0;
  if ( (int)RaspMapCharacterCodeToGlyphIndex(v7, a2, &v17) >= 0 )
    v10 = v17;
  v11 = RaspMapGlyphIndexToLocation(a1, v10, &v18);
  v12 = a5;
  if ( v11 >= 0 || (v10 = 0, Bearings = RaspMapGlyphIndexToLocation(a1, 0LL, &v18), Bearings >= 0) )
  {
    v17 = v10;
    GlyphData = RaspLoadGlyphData(a1, v18, (unsigned int)&v17, (unsigned int)&v16, (__int64)v12);
    v9 = v16;
    Bearings = GlyphData;
    if ( GlyphData >= 0 )
    {
      Bearings = RaspConvertDeltas(v16);
      if ( Bearings >= 0 )
        Bearings = RaspLoadBearings(a1, v17, v9, a4);
    }
  }
  if ( a3 )
  {
    *a3 = v9;
    v9 = 0LL;
  }
  if ( v9 )
    RaspFreeMemory(v9, v12);
  return (unsigned int)Bearings;
}
