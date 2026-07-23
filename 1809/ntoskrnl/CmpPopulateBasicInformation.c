/*
 * XREFs of CmpPopulateBasicInformation @ 0x1405D47B0
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall CmpPopulateBasicInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned __int16 v9; // dx
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int i; // eax

  v9 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v9 *= 2;
  v10 = v9;
  v11 = v9 + 16;
  *a5 = v11;
  if ( a4 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 12) = v9;
    v12 = a4 - 16;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      v13 = v12 >> 1;
      if ( v13 >= *(unsigned __int16 *)(a2 + 72) )
        v13 = *(unsigned __int16 *)(a2 + 72);
      v14 = 0;
      for ( i = 0; i < v13; ++i )
        *(_WORD *)(a3 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
    }
    else
    {
      if ( v12 <= v9 )
        v10 = a4 - 16;
      memmove((void *)(a3 + 16), (const void *)(a2 + 76), v10);
      v14 = 0;
    }
    if ( a4 < v11 )
      return (unsigned int)-2147483643;
  }
  return v14;
}
