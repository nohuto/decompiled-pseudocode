/*
 * XREFs of FopValidateFontNameTable @ 0x1409FBC8C
 * Callers:
 *     FopInitializeFonts @ 0x1409FB994 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     FopReadNamingTable @ 0x1409FC154 (FopReadNamingTable.c)
 *     FopGetTableOffsetAndSize @ 0x1409FC2E8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall FopValidateFontNameTable(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rsi
  signed int TableOffsetAndSize; // edi
  unsigned int v7; // r15d
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  void *Memory; // rax
  unsigned int i; // edx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  v4 = 0LL;
  TableOffsetAndSize = FopGetTableOffsetAndSize(a1, a2, 1851878757, (unsigned int)&v21, (__int64)&v19);
  if ( TableOffsetAndSize < 0 )
    return (unsigned int)TableOffsetAndSize;
  v7 = v21;
  v8 = FopReadNamingTable(a1, v21, &v20);
  v9 = v20;
  TableOffsetAndSize = v8;
  if ( v8 >= 0 )
  {
    v10 = v20 + 6;
    v11 = 0;
    if ( !*(_WORD *)(v20 + 2) )
    {
LABEL_19:
      TableOffsetAndSize = -1073741701;
      goto LABEL_14;
    }
    while ( *(_DWORD *)v10 != 65539 || *(_DWORD *)(v10 + 4) != 66569 )
    {
      ++v11;
      v10 += 12LL;
      if ( v11 >= *(unsigned __int16 *)(v20 + 2) )
        goto LABEL_19;
    }
    v12 = *(unsigned __int16 *)(v10 + 8);
    v13 = -1;
    v14 = v12 + 2;
    if ( v12 + 2 >= v12 )
      v13 = v12 + 2;
    TableOffsetAndSize = v14 < v12 ? 0xC0000095 : 0;
    if ( v14 < v12 )
    {
LABEL_14:
      if ( TableOffsetAndSize >= 0 )
        goto LABEL_15;
LABEL_21:
      if ( v4 )
        BgpFwFreeMemory(v4);
      goto LABEL_15;
    }
    Memory = (void *)BgpFwAllocateMemory(v13);
    v4 = (__int64)Memory;
    if ( Memory )
    {
      TableOffsetAndSize = FioFwReadBytesAtOffset(
                             a1,
                             v7 + *(unsigned __int16 *)(v10 + 10) + *(unsigned __int16 *)(v9 + 4),
                             *(unsigned __int16 *)(v10 + 8),
                             Memory);
      if ( TableOffsetAndSize < 0 )
        goto LABEL_21;
      *(_WORD *)(v10 + 8) >>= 1;
      for ( i = 0; i < *(unsigned __int16 *)(v10 + 8); *(_WORD *)(v4 + 2 * v17) = __ROR2__(*(_WORD *)(v4 + 2 * v17), 8) )
        v17 = i++;
      *(_WORD *)(v4 + 2LL * i) = 0;
      *a3 = v4;
      goto LABEL_14;
    }
    TableOffsetAndSize = -1073741801;
  }
LABEL_15:
  if ( v9 )
    BgpFwFreeMemory(v9);
  return (unsigned int)TableOffsetAndSize;
}
