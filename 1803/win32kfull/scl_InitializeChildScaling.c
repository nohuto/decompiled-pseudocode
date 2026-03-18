/*
 * XREFs of scl_InitializeChildScaling @ 0x1C02B469C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ComputeScaling @ 0x1C02B43E0 (scl_ComputeScaling.c)
 */

__int64 __fastcall scl_InitializeChildScaling(_DWORD *a1, int *a2, unsigned __int16 a3)
{
  int v3; // ebx
  int v5; // r9d
  int v6; // esi
  signed int v7; // r8d
  signed int v8; // eax
  __int64 result; // rax

  v3 = a3 << 16;
  if ( a1[118] )
  {
    v5 = a3 << 16;
    v6 = v5;
  }
  else
  {
    v5 = abs32(*a2);
    v7 = abs32(a2[1]);
    v6 = abs32(a2[3]);
    v8 = abs32(a2[4]);
    if ( v5 <= v7 )
      v5 = v7;
    if ( v6 <= v8 )
      v6 = abs32(a2[4]);
  }
  a1[44] = scl_ComputeScaling(a1 + 58, v5, v3);
  result = scl_ComputeScaling(a1 + 62, v6, v3);
  a1[45] = result;
  return result;
}
