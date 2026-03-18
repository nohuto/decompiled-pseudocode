/*
 * XREFs of FopValidateFontNameTable @ 0x140A408F4
 * Callers:
 *     FopInitializeFonts @ 0x140A405F4 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x140184800 (FioFwReadBytesAtOffset.c)
 *     FopReadNamingTable @ 0x140A40DC8 (FopReadNamingTable.c)
 *     BgpFoGetTableOffset @ 0x140A41B68 (BgpFoGetTableOffset.c)
 */

__int64 __fastcall FopValidateFontNameTable(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int TableOffset; // edi
  unsigned int v7; // r15d
  int NamingTable; // eax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  void *Memory; // rax
  unsigned int i; // edx
  __int64 v16; // rcx
  __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v18[0] = 0LL;
  TableOffset = BgpFoGetTableOffset(a1, a2, 1851878757LL, &v19);
  if ( TableOffset < 0 )
    return (unsigned int)TableOffset;
  v7 = v19;
  NamingTable = FopReadNamingTable(a1, v19, v18);
  v9 = v18[0];
  TableOffset = NamingTable;
  if ( NamingTable >= 0 )
  {
    v10 = v18[0] + 6;
    v11 = 0;
    if ( !*(_WORD *)(v18[0] + 2) )
    {
LABEL_17:
      TableOffset = -1073741701;
      goto LABEL_12;
    }
    while ( *(_DWORD *)v10 != 65539 || *(_DWORD *)(v10 + 4) != 66569 )
    {
      ++v11;
      v10 += 12LL;
      if ( v11 >= *(unsigned __int16 *)(v18[0] + 2) )
        goto LABEL_17;
    }
    v12 = *(unsigned __int16 *)(v10 + 8);
    v13 = v12 + 2;
    if ( (unsigned int)v13 < v12 )
    {
      TableOffset = -1073741675;
    }
    else
    {
      Memory = (void *)BgpFwAllocateMemory(v13);
      v4 = (__int64)Memory;
      if ( Memory )
      {
        TableOffset = FioFwReadBytesAtOffset(
                        a1,
                        v7 + *(unsigned __int16 *)(v10 + 10) + *(unsigned __int16 *)(v9 + 4),
                        *(unsigned __int16 *)(v10 + 8),
                        Memory);
        if ( TableOffset < 0 )
          goto LABEL_20;
        *(_WORD *)(v10 + 8) >>= 1;
        for ( i = 0; i < *(unsigned __int16 *)(v10 + 8); *(_WORD *)(v4 + 2 * v16) = __ROR2__(
                                                                                      *(_WORD *)(v4 + 2 * v16),
                                                                                      8) )
          v16 = i++;
        *(_WORD *)(v4 + 2LL * i) = 0;
        *a3 = v4;
LABEL_12:
        if ( TableOffset >= 0 )
          goto LABEL_13;
LABEL_20:
        if ( v4 )
          BgpFwFreeMemory(v4);
        goto LABEL_13;
      }
      TableOffset = -1073741801;
    }
  }
LABEL_13:
  if ( v9 )
    BgpFwFreeMemory(v9);
  return (unsigned int)TableOffset;
}
