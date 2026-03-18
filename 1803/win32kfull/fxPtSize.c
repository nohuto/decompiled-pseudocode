/*
 * XREFs of fxPtSize @ 0x1C0223028
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 * Callees:
 *     iHipot @ 0x1C022308C (iHipot.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

__int64 __fastcall fxPtSize(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // eax

  v2 = 72 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL);
  v3 = CompDiv(*(unsigned int *)(a1 + 44), v2 * *(int *)(a1 + 92));
  v4 = CompDiv(*(unsigned int *)(a1 + 48), v2 * *(int *)(a1 + 96));
  return iHipot(v3, v4);
}
