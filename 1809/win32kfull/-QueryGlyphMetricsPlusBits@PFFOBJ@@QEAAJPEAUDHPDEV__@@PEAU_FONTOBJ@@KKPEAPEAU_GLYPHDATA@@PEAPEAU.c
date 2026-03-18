/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0162AC4
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C0081018 (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0082AB4 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02B80EC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0084130 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C008415C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C0162B70 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0162CE0 (UmfdQueryGlyphMetricsPlusBits.c)
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
  int v8; // esi
  int v9; // ebp
  unsigned int GlyphMetricsPlusBits; // edi
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = (int)a3;
  v9 = (int)a2;
  if ( *(struct PDEV **)(*(_QWORD *)this + 88LL) != qword_1C031DE98 )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, v8, a4, a5, (__int64)a6, (__int64)a7);
  if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, 1u, *a7) )
    GlyphMetricsPlusBits = -1;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  return GlyphMetricsPlusBits;
}
