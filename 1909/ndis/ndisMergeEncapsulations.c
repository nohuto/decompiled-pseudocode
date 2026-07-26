/*
 * XREFs of ndisMergeEncapsulations @ 0x1C003BFA0
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C003BCDC (ndisOidPreOpenSetEncapsulation.c)
 *     ndisMRestoreFilterSettings @ 0x1C006B874 (ndisMRestoreFilterSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMergeEncapsulations(__int64 a1, _DWORD *a2)
{
  int v3; // r9d
  unsigned int v4; // edx
  int v5; // eax
  int v6; // eax
  char v7; // al

  if ( *(_BYTE *)a1 != 0xA8 || !*(_BYTE *)(a1 + 1) || *(_WORD *)(a1 + 2) < 0x1Cu )
    return (unsigned int)-1073741637;
  v3 = a2[1];
  v4 = 0;
  if ( !v3 )
  {
    v3 = 0;
    if ( *(_DWORD *)(a1 + 4) == 1 )
    {
      a2[1] = 1;
      v3 = 1;
      a2[2] = *(_DWORD *)(a1 + 8);
      a2[3] = *(_DWORD *)(a1 + 12);
    }
  }
  v5 = a2[4];
  if ( !v5 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      a2[4] = 1;
      a2[5] = *(_DWORD *)(a1 + 20);
      a2[6] = *(_DWORD *)(a1 + 24);
      v5 = 1;
    }
  }
  if ( v3 != 1 || v5 != 1 )
    return v4;
  if ( a2[3] != a2[6] )
    return (unsigned int)-1073741637;
  v6 = a2[2];
  if ( (v6 & 2) != 0 )
  {
    v7 = a2[5] & 2;
  }
  else
  {
    if ( (v6 & 0x10) == 0 )
      return v4;
    v7 = a2[5] & 0x10;
  }
  return v7 == 0 ? 0xC00000BB : 0;
}
