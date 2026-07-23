/*
 * XREFs of CmpPopulateNodeInformation @ 0x1405B014C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpPopulateNodeInformation(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // r14d
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax

  v11 = 2 * *(_WORD *)(a2 + 72);
  v12 = 0;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v11 = *(_WORD *)(a2 + 72);
  v13 = v11;
  v14 = v11 + 24;
  if ( a4 )
  {
    v15 = (v11 + 31) & 0xFFFFFFF8;
    v14 = a4 + v15;
  }
  else
  {
    v15 = v11 + 24;
  }
  *a7 = v14;
  if ( a6 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)a1;
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a5 + 16) = a4;
    *(_DWORD *)(a5 + 20) = v11;
    v16 = -1;
    if ( a4 )
      v16 = v15;
    *(_DWORD *)(a5 + 12) = v16;
    v17 = a6 - 24;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      CmpCopyCompressedName(a5 + 24, v17, a2 + 76, *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      if ( (unsigned int)v17 <= v13 )
        v13 = a6 - 24;
      memmove((void *)(a5 + 24), (const void *)(a2 + 76), v13);
    }
    if ( a6 < v15 )
    {
      return (unsigned int)-2147483643;
    }
    else
    {
      v18 = a6 - v15;
      if ( a4 )
      {
        if ( v18 > a4 )
          v18 = a4;
        memmove((void *)(a5 + v15), a3, v18);
      }
      if ( v14 > a6 )
        return (unsigned int)-2147483643;
    }
  }
  return v12;
}
