/*
 * XREFs of FONTOBJ_cGetAllGlyphHandles @ 0x1C0277920
 * Callers:
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C0298020 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1C02AA5C4 (-chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  unsigned int AllHandles; // eax
  ULONG v3; // ebx
  FONTOBJ *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v5 = pfo;
  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&v5, phg);
  v5 = 0LL;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
