/*
 * XREFs of RaspLoadGlyphData @ 0x1401852B8
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x140183CE0 (RaspGetUnscaledGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14034A1D8 (RaspGetCompositeGlyphList.c)
 * Callees:
 *     RaspLoadEmptyGlyph @ 0x14018323C (RaspLoadEmptyGlyph.c)
 *     FioFwReadUshortAtOffset @ 0x1401849AC (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1401849E0 (RaspInitializeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14034A878 (RaspLoadCompositeGlyphData.c)
 */

__int64 __fastcall RaspLoadGlyphData(__int64 a1, int a2, int a3, __int64 *a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  __int16 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  if ( a2 == -1 )
    return RaspLoadEmptyGlyph(a4);
  v10 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  FioFwReadUshortAtOffset(*(_QWORD *)(v10 + 16), (unsigned int)(v9 + a2), &v12);
  if ( v12 < 0 )
    return RaspLoadCompositeGlyphData(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  else
    return RaspInitializeGlyphData(a1, a2, a4, a5);
}
