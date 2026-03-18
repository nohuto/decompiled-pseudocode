/*
 * XREFs of vCheckForSingularXform @ 0x1C022354C
 * Callers:
 *     bNewXform @ 0x1C0222920 (bNewXform.c)
 * Callees:
 *     iHipot @ 0x1C022308C (iHipot.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall vCheckForSingularXform(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v3; // edi
  unsigned int v4; // eax
  int fixed; // eax
  int v6; // eax
  unsigned int v7; // r14d
  signed int v8; // ebp
  signed int v9; // esi
  signed int v10; // r15d
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r10d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r10d
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r10d
  int v22; // r11d
  unsigned int v23; // eax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(v1 + 308) << 16;
  v4 = iHipot(*(_DWORD *)(a1 + 96), *(_DWORD *)(a1 + 92));
  fixed = FixMul(v4, v3);
  if ( (int)(((fixed >> 15) + 1) & 0xFFFFFFFE) < 4 )
  {
    *(_DWORD *)(a1 + 116) |= 0x20u;
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 80);
      v7 = abs32(*(_DWORD *)(a1 + 96));
      v8 = (*(int *)(a1 + 96) >> 31) & 0xFFFFFFFE;
      v9 = (v6 >> 31) & 0xFFFFFFFE;
      v10 = abs32(v6);
      v11 = CompDiv(*(unsigned __int16 *)(v1 + 308), 0x20000LL);
      *(_DWORD *)(a1 + 96) = v11;
      if ( v10 != v7 )
        v11 = CompDiv(v7, v11 * (__int64)v10);
      *(_DWORD *)(a1 + 80) = v11;
      if ( v8 < -1 )
        *(_DWORD *)(a1 + 96) = -*(_DWORD *)(a1 + 96);
      if ( v9 < -1 )
        *(_DWORD *)(a1 + 80) = -*(_DWORD *)(a1 + 80);
    }
    else
    {
      v12 = CompDiv((unsigned int)fixed, 0x200000000LL);
      v13 = FixMul(*(unsigned int *)(a1 + 80), v12);
      v14 = *(unsigned int *)(a1 + 84);
      *(_DWORD *)(a1 + 80) = v13;
      v16 = FixMul(v14, v15);
      v17 = *(unsigned int *)(a1 + 92);
      *(_DWORD *)(a1 + 84) = v16;
      v19 = FixMul(v17, v18);
      v20 = *(unsigned int *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v19;
      *(_DWORD *)(a1 + 96) = FixMul(v20, v21);
      *(float *)(a1 + 56) = (float)v22 * 0.000015258789;
      *(float *)(a1 + 68) = (float)*(int *)(a1 + 96) * 0.000015258789;
      *(float *)(a1 + 60) = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a1 + 64) = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
    }
  }
  v23 = iHipot(*(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84));
  result = FixMul(v23, v3);
  if ( (int)result <= 0x8000 )
    *(_DWORD *)(a1 + 116) |= 8u;
  return result;
}
