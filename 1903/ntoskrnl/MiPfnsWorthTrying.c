/*
 * XREFs of MiPfnsWorthTrying @ 0x1400DA610
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1402E8BA0 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1402ECAC0 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DA70 (MiFreeZeroPageSizeIndex.c)
 *     MiActivePageClaimCandidate @ 0x1400DAA40 (MiActivePageClaimCandidate.c)
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     MiClusterVadFull @ 0x1402E0820 (MiClusterVadFull.c)
 *     MiPfnLargeBitSet @ 0x1402E6D64 (MiPfnLargeBitSet.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v6; // cx
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  char v13; // cl
  unsigned __int8 v14; // r11
  char v15; // al
  BOOL v16; // esi
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  __int16 *v20; // rcx
  __int64 *v21; // r10
  __int64 active; // rax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rdx
  PVOID *v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  bool v36; // zf
  unsigned __int64 v37; // r8
  __int64 LeafPfnBuddy; // rax
  int v39; // eax
  __int16 v40; // [rsp+50h] [rbp+8h]

  v6 = *a1;
  v7 = a2 + 48 * a3;
  v40 = v6;
  *a5 = 0;
  v9 = a2;
  v10 = -1LL;
  if ( a2 >= v7 )
    return 0LL;
  v11 = (unsigned __int64)MiLargePageSizes;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v9 + 40);
    if ( ((HIDWORD(v12) >> 8) & 0x3FF) != v6 )
    {
      v39 = MiPfnLargeBitSet(&MiSystemPartition, (__int64)(v9 + 0x58000000000LL) / 48);
      if ( v39 != -1 )
        v9 = 48 * (((__int64)(v9 + 0x58000000000LL) / 48) & -MiLargePageSizes[v39]) - 0x58000000000LL;
      goto LABEL_43;
    }
    v13 = *(_BYTE *)(v9 + 34);
    v14 = v13 & 7;
    if ( (v13 & 7u) <= 1 )
      break;
    if ( v14 != 5 )
    {
      v15 = *(_BYTE *)(v9 + 35);
      v16 = 0;
      if ( v15 < 0 )
      {
        if ( v14 == 2 )
        {
          if ( *(_WORD *)(v9 + 32) )
            goto LABEL_43;
          goto LABEL_22;
        }
        if ( v14 != 6
          || (v13 & 0x10) != 0
          || *(_WORD *)(v9 + 32) != 1
          || ((v12 >> 54) & 7) == 2
          || (v15 & 8) != 0
          || (*(_BYTE *)v9 & 1) == 0 )
        {
          goto LABEL_43;
        }
      }
      else
      {
        if ( v14 <= 4u )
        {
          if ( *(_WORD *)(v9 + 32) || (a4 & 0x4000000) == 0 && *(__int64 *)(v9 + 8) >= 0 )
            goto LABEL_43;
          goto LABEL_22;
        }
        v17 = (unsigned __int128)((__int64)(v9 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v18 = (__int64)(v9 + 0x58000000000LL) / 48;
        if ( (v18 & 0xFFFFFFFFFFFFFE00uLL) != v10 )
        {
          v10 = ((__int64)(v9 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
          if ( *((_BYTE *)a1 + 4766) )
          {
            v19 = 0LL;
            v20 = a1 + 2500;
            v21 = MiLargePageSizes;
            while ( 1 )
            {
              if ( *(_QWORD *)v20 )
              {
                v17 = v18 % *v21;
                v11 = v18 / *v21;
                if ( _bittest64(*((const signed __int64 **)v20 + 1), v11) )
                  break;
              }
              v19 = (unsigned int)(v19 + 1);
              v20 += 8;
              ++v21;
              if ( (unsigned int)v19 >= 2 )
                goto LABEL_14;
            }
            v32 = v7 - 48 * (v18 & -MiLargePageSizes[v19]) + 0x58000000000LL;
            goto LABEL_34;
          }
        }
LABEL_14:
        if ( v14 != 6 )
          goto LABEL_43;
        if ( ((v12 >> 54) & 7) == 2 )
        {
          if ( (a4 & 8) != 0 )
            goto LABEL_43;
          LeafPfnBuddy = MiGetLeafPfnBuddy(v9, v17, v11);
          if ( LeafPfnBuddy == -32 )
            goto LABEL_43;
          v11 = (unsigned __int64)MiLargePageSizes;
          if ( !LeafPfnBuddy )
            *a5 = 1;
          goto LABEL_22;
        }
        if ( (a4 & 0x800000) != 0 )
        {
          if ( (v12 & 0x200000000000000LL) != 0 )
          {
            if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
              goto LABEL_43;
            goto LABEL_17;
          }
          if ( v18 != (v18 & 0xFFFFFFFFFFFFFFF0uLL) )
            goto LABEL_17;
          v16 = (__int64)(v7 - v9) >= 768;
        }
        else
        {
LABEL_17:
          v16 = 0;
        }
      }
      active = MiActivePageClaimCandidate(a1, v9, 0LL);
      if ( active )
        return (__int64)(v7 + 0x58000000000LL) / 48 - (~(active - 1) & ((__int64)(v9 + 0x58000000000LL) / 48));
      if ( (a4 & 8) != 0 || v16 && (unsigned int)MiClusterVadFull(v9, 0LL) == 1 )
        goto LABEL_43;
      v11 = (unsigned __int64)MiLargePageSizes;
      goto LABEL_22;
    }
    if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
      goto LABEL_43;
    if ( (*(_BYTE *)v9 & 1) == 0 )
    {
      v27 = (__int64)(v9 + 0x58000000000LL) / 48;
      v28 = &qword_1404668A8;
      v29 = 0;
      while ( (PVOID)v27 != *v28 )
      {
        ++v29;
        ++v28;
        if ( v29 >= 4 )
        {
          v30 = 0;
          v31 = &unk_140466888;
          while ( v27 != *v31 )
          {
            ++v30;
            ++v31;
            if ( v30 >= 4 )
              goto LABEL_22;
          }
          break;
        }
      }
LABEL_43:
      v32 = v7 - v9;
LABEL_34:
      v33 = 0x2AAAAAAAAAAAAAABLL;
      return ((__int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 3)
           + ((unsigned __int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 63);
    }
LABEL_22:
    v9 += 48LL;
    if ( v9 >= v7 )
      return 0LL;
    v6 = v40;
  }
  v24 = MiFreeZeroPageSizeIndex(v9);
  if ( v24 == -1 )
  {
LABEL_21:
    v11 = (unsigned __int64)MiLargePageSizes;
    goto LABEL_22;
  }
  v34 = MiLargePageSizes[v24];
  v35 = ((unsigned __int64)((unsigned __int128)((__int64)(v9 - v26) * (__int128)v25) >> 64) >> 63)
      + ((__int64)((unsigned __int128)((__int64)(v9 - v26) * (__int128)v25) >> 64) >> 3);
  if ( v34 >= 0x200 )
    v36 = (a4 & 0x2000000) == 0;
  else
    v36 = (a4 & 0x1000000) == 0;
  if ( v36 )
  {
    v37 = v34 - (v35 & (v34 - 1));
    if ( v37 > ((unsigned __int64)((unsigned __int128)((__int64)(v7 - v9) * (__int128)v25) >> 64) >> 63)
             + ((__int64)((unsigned __int128)((__int64)(v7 - v9) * (__int128)v25) >> 64) >> 3) )
      v37 = ((unsigned __int64)((unsigned __int128)((__int64)(v7 - v9) * (__int128)v25) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((__int64)(v7 - v9) * (__int128)v25) >> 64) >> 3);
    v9 = 48 * v37 + v9 - 48;
    goto LABEL_21;
  }
  v32 = v7 - 48 * (v35 & -(__int64)v34) - v26;
  v33 = v25;
  return ((__int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 3)
       + ((unsigned __int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 63);
}
