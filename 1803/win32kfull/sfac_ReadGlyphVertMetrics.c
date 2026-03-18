/*
 * XREFs of sfac_ReadGlyphVertMetrics @ 0x1C02C0B30
 * Callers:
 *     SubstituteVertMetrics @ 0x1C02B8AA0 (SubstituteVertMetrics.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02C0AE0 (sfac_ReadGlyphMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 *     sfac_ReadGlyphBbox @ 0x1C02C0798 (sfac_ReadGlyphBbox.c)
 */

__int64 __fastcall sfac_ReadGlyphVertMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned __int16 v4; // si
  __int64 v5; // r10
  int v10; // edi
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 202);
  v5 = 0LL;
  v15 = 0LL;
  v10 = a2;
  if ( a2 >= v4 )
    v11 = 2 * (a2 + v4) + 2;
  else
    v11 = 4 * a2 + 4;
  if ( *(_DWORD *)(a1 + 204) )
  {
    result = sfac_GetDataPtr(a1, 0, v11, 20, 0, &v15);
    if ( (_DWORD)result )
      return result;
    v5 = v15;
  }
  if ( *(_DWORD *)(a1 + 204) && v5 )
  {
    if ( a2 >= v4 )
    {
      *a3 = __ROR2__(*(_WORD *)(4 * (unsigned int)v4 + v5 - 4), 8);
      v14 = *(_WORD *)(4 * (unsigned int)v4 + 2LL * (v10 - v4) + v5);
    }
    else
    {
      v13 = (unsigned int)(4 * v10);
      *a3 = __ROR2__(*(_WORD *)(v13 + v5), 8);
      v14 = *(_WORD *)((unsigned int)(v13 + 2) + v5);
    }
    *a4 = __ROR2__(v14, 8);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
    result = sfac_ReadGlyphBbox(a1, *(_WORD *)(a1 + 216), (__int64)&v15);
    if ( (_DWORD)result )
      return result;
    *a3 = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *a4 = *(_WORD *)(a1 + 224) - HIWORD(v15);
  }
  return 0LL;
}
