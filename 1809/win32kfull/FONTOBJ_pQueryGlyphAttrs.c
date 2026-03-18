/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x1C02779D0
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02983B0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02A4228 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  SIZE sizLogResPpi; // rax
  struct _FD_GLYPHATTR *GlyphAttrs; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  if ( pfo && (sizLogResPpi = pfo[1].sizLogResPpi) != 0LL && *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3376LL) )
  {
    v7[0] = *(_QWORD *)&pfo[2].iUniq;
    GlyphAttrs = PFFOBJ::QueryGlyphAttrs((PFFOBJ *)v7, pfo, iMode);
  }
  else
  {
    GlyphAttrs = 0LL;
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return GlyphAttrs;
}
