/*
 * XREFs of FopInitializeFonts @ 0x140A405F4
 * Callers:
 *     BgpFoInitialize @ 0x140A404F8 (BgpFoInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x140182C5C (FioFwReadUlongAtOffset.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FopFreeFontData @ 0x140991220 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A40720 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A408F4 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A40BD0 (BgpRasInitializeRasterizer.c)
 *     BgpFoGetTableOffset @ 0x140A41B68 (BgpFoGetTableOffset.c)
 */

__int64 __fastcall FopInitializeFonts(__int64 a1)
{
  int v1; // esi
  int v2; // ebp
  unsigned int i; // r14d
  _QWORD *Memory; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( i = 12; ; i += 4 )
    {
      Memory = (_QWORD *)BgpFwAllocateMemory(0x80uLL);
      v6 = Memory;
      if ( Memory )
        break;
LABEL_12:
      if ( (unsigned int)++v2 >= *(_DWORD *)(a1 + 24) )
        return v1 == 0 ? 0xC000007B : 0;
    }
    memset(Memory, 0, 0x80uLL);
    v6[14] = v6 + 13;
    v6[13] = v6 + 13;
    v6[2] = a1;
    *((_DWORD *)v6 + 10) = v2;
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
    {
      if ( (int)FioFwReadUlongAtOffset(*(_QWORD *)(a1 + 16), i, &v10) < 0 )
      {
LABEL_14:
        FopFreeFontData(v6);
        goto LABEL_12;
      }
      v7 = v10;
    }
    else
    {
      v7 = 0LL;
      v10 = 0;
    }
    *((_DWORD *)v6 + 11) = v7;
    if ( (int)BgpFoGetTableOffset(*(_QWORD *)(a1 + 16), v7, 1668112752LL, v6 + 6) >= 0
      && (int)FopValidateFontNameTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 11), v6 + 4) >= 0
      && (int)FopReadMappingTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 12), v6 + 3) >= 0
      && (int)BgpRasInitializeRasterizer(v6) >= 0 )
    {
      v8 = *(_QWORD **)(a1 + 48);
      if ( *v8 != a1 + 40 )
        __fastfail(3u);
      *v6 = a1 + 40;
      ++v1;
      v6[1] = v8;
      *v8 = v6;
      *(_QWORD *)(a1 + 48) = v6;
      goto LABEL_12;
    }
    goto LABEL_14;
  }
  return v1 == 0 ? 0xC000007B : 0;
}
