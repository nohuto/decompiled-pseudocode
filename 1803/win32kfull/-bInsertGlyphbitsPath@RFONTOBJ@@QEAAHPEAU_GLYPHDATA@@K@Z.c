/*
 * XREFs of ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02A612C
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C007FDB4 (xInsertGlyphbitsRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00843B8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C01282B4 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02A63E8 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsPath(struct _FONTOBJ **this, struct _GLYPHDATA *a2, int a3)
{
  struct _FONTOBJ *v3; // r12
  unsigned int v7; // ebx
  struct _FONTOBJ *v8; // r8
  struct DHPDEV__ *sizLogResPpi; // rdx
  unsigned int v10; // ebp
  EPATHFONTOBJ *v11; // rax
  GLYPHDEF v12; // rsi
  EPATHOBJ *v13; // rcx
  PVOID v15[2]; // [rsp+40h] [rbp-B8h] BYREF
  char v16[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A0h]

  v3 = *this;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  v7 = 0;
  if ( v17 )
  {
    v8 = *this;
    sizLogResPpi = (struct DHPDEV__ *)(*this)[1].sizLogResPpi;
    v15[0] = (*this)[1].pvConsumer;
    if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)v15, sizLogResPpi, v8, 2u, a2->hg, 0LL, v16, 0) != -1 )
    {
      v10 = EPATHOBJ::cjSize((EPATHOBJ *)v16) + 424;
      while ( 1 )
      {
        v11 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, v10);
        v12.pgb = (GLYPHBITS *)v11;
        if ( v11 )
          break;
        if ( !a3 )
          goto LABEL_8;
        RFONTOBJ::vFlushCache((RFONTOBJ *)this);
        a3 = 0;
      }
      EPATHFONTOBJ::vInit(v11, v10);
      EPATHOBJ::bClone(v13, (struct EPATHOBJ *)v16);
      a2->gdf = v12;
      v7 = 1;
      *(_QWORD *)&v3[9].iUniq += v10;
    }
  }
LABEL_8:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v7;
}
