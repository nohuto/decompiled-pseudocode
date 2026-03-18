/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0165D94
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C004F4D4 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0109FA8 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CDC8C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00537CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0053D3C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0165F18 (UmfdQueryGlyphMetricsPlusBits.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v8; // edi
  int v9; // esi
  unsigned int GlyphMetricsPlusBits; // ebx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = (int)a3;
  v9 = (int)a2;
  if ( *(struct PDEV **)(*(_QWORD *)this + 88LL) != qword_1C0332E90 )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, v8, a4, a5, (__int64)a6, (__int64)a7);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  return GlyphMetricsPlusBits;
}
