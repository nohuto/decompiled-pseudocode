/*
 * XREFs of RtlpConstructIndirectRelocationFixup @ 0x14008E328
 * Callers:
 *     RtlApplyIndirectRelocationToPage @ 0x14008DE60 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x1401880A0 (RtlApplyIndirectRelocationToImage.c)
 * Callees:
 *     RtlSizeOfRetpolineIndirectFixup @ 0x14008E4CC (RtlSizeOfRetpolineIndirectFixup.c)
 */

__int16 __fastcall RtlpConstructIndirectRelocationFixup(int a1, int *a2, __int64 a3, __int16 *a4, int a5, __int64 a6)
{
  unsigned __int64 v10; // rax
  __int16 v11; // r8
  int v12; // ebx
  int v13; // edx
  __int16 result; // ax
  _WORD *v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int16 v18; // cx
  int v19; // r8d

  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)(a6 + 8) = 0;
  *(_WORD *)(a6 + 12) = 0;
  v10 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v10 = 0x9090909090909090uLL;
  *(_QWORD *)(a6 + 2) = v10;
  *(_DWORD *)(a6 + 10) = v10;
  v11 = *a4;
  if ( a5 )
  {
    v12 = *a2;
    if ( (v11 & 0x4000) != 0 )
      v13 = *(_DWORD *)(a3 + 68);
    else
      v13 = *(_DWORD *)(a3 + 72);
    *(_BYTE *)(a6 + 2) = ((v11 & 0x1000) == 0) | 0xE8;
    *(_DWORD *)(a6 + 3) = v12 + v13 - (a1 + 5);
  }
  else
  {
    v16 = 0;
    if ( (v11 & 0x2000) != 0 )
    {
      *(_BYTE *)(a6 + 2) = 72;
      v16 = 1;
      v11 = *a4;
    }
    v17 = v16 + 1;
    *(_BYTE *)(v16 + a6 + 2) = -1;
    v18 = *a4 & 0x1000;
    if ( (v11 & 0x4000) != 0 )
    {
      *(_BYTE *)(v17 + a6 + 2) = v18 != 0 ? 21 : 37;
      v19 = a2[1] - (v16 + a1 + 6);
      *(_BYTE *)(v16 + 2 + a6 + 2) = v19;
      *(_BYTE *)(v16 + 3 + a6 + 2) = BYTE1(v19);
      *(_BYTE *)(v16 + 4 + a6 + 2) = BYTE2(v19);
      *(_BYTE *)(v16 + 5 + a6 + 2) = HIBYTE(v19);
    }
    else
    {
      *(_BYTE *)(v17 + a6 + 2) = v18 != 0 ? -48 : -32;
      if ( (*a4 & 0x1000) != 0 )
      {
        *(_BYTE *)(v16 + 2 + a6 + 2) = 15;
        *(_BYTE *)(v16 + 3 + a6 + 2) = 31;
        *(_BYTE *)(v16 + 4 + a6 + 2) = 0;
      }
    }
  }
  result = (1 << RtlSizeOfRetpolineIndirectFixup(a4)) - 1;
  *v15 = result;
  return result;
}
