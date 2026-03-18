/*
 * XREFs of sfac_GetGlyphLocation @ 0x1C02BF7D0
 * Callers:
 *     sfac_ReadGlyphBbox @ 0x1C02C0798 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHeader @ 0x1C02C0868 (sfac_ReadGlyphHeader.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetGlyphLocation(__int64 a1, unsigned __int16 a2, unsigned __int32 *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int32 v14; // eax
  int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  v10 = a2;
  v11 = 6 * a2;
  result = sfac_GetDataPtr(a1, 0, v11 + 6, 15, 0, v18);
  if ( !(_DWORD)result )
  {
    if ( v18[0] )
    {
      v13 = v18[0] + v11;
      v14 = _byteswap_ulong(*(_DWORD *)v13);
      *a3 = v14;
      if ( v14 )
        v6 = (unsigned __int16)__ROR2__(*(_WORD *)(v13 + 4), 8);
      *a4 = v6;
      *a5 = 21;
LABEL_15:
      InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
      return 0LL;
    }
    v15 = 2 * v10 + 4;
    if ( *(_WORD *)(a1 + 16) )
      v15 = 4 * v10 + 8;
    result = sfac_GetDataPtr(a1, 0, v15, 2, 1, v18);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 16) )
      {
        v16 = _byteswap_ulong(*(_DWORD *)(v18[0] + 4LL * a2));
        v17 = _byteswap_ulong(*(_DWORD *)(v18[0] + 4LL * a2 + 4));
      }
      else
      {
        v16 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v18[0] + 2LL * a2), 8);
        v17 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v18[0] + 2LL * a2 + 2), 8);
      }
      *a3 = v16;
      if ( v16 > v17 )
        return 5137LL;
      *a4 = v17 - v16;
      *a5 = 6;
      goto LABEL_15;
    }
  }
  return result;
}
