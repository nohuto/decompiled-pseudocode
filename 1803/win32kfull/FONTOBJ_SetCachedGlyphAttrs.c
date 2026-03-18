/*
 * XREFs of FONTOBJ_SetCachedGlyphAttrs @ 0x1C0278648
 * Callers:
 *     UmfdDestroyFont @ 0x1C00CAF30 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02AF150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall FONTOBJ_SetCachedGlyphAttrs(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v3 = 0LL;
  *(_QWORD *)(a1 + 8LL * a2 + 880) = a3;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
}
