/*
 * XREFs of FONTOBJ_GetCachedGlyphAttrs @ 0x1C00825F4
 * Callers:
 *     UmfdDestroyFont @ 0x1C0082580 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02C1150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall FONTOBJ_GetCachedGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 896);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
