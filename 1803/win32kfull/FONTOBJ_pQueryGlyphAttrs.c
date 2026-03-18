/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x1C0263DF0
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0290614 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  ULONG_PTR iTTUniq; // rax
  struct _FD_GLYPHATTR *GlyphAttrs; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  PVOID v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  if ( pfo && (iTTUniq = pfo[1].iTTUniq) != 0 && *(_QWORD *)(iTTUniq + 3368) )
  {
    v7[0] = pfo[1].pvConsumer;
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
