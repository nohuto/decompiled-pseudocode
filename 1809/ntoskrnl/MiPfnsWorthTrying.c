/*
 * XREFs of MiPfnsWorthTrying @ 0x14009A6F0
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1402CE488 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 * Callees:
 *     MiPfnLargeBitSet @ 0x14009AA90 (MiPfnLargeBitSet.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiActivePageClaimCandidate @ 0x14009C990 (MiActivePageClaimCandidate.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiClusterVadFull @ 0x1402C6318 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v5; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  char v13; // dl
  unsigned __int8 v14; // al
  char v15; // cl
  BOOL v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // eax
  __int64 active; // rax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdx
  PVOID *v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdx
  bool v34; // zf
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 LeafPfnBuddy; // rax
  int v38; // eax

  v5 = *a1;
  v7 = a2;
  v8 = a2 + 48 * a3;
  *a5 = 0;
  v10 = -1LL;
  if ( a2 >= v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v7 + 40);
    v12 = 0x2AAAAAAAAAAAAAABLL;
    if ( ((HIDWORD(v11) >> 8) & 0x3FF) != v5 )
    {
      v38 = MiPfnLargeBitSet(&MiSystemPartition, (__int64)(v7 + 0x58000000000LL) / 48);
      if ( v38 != -1 )
        v7 = 48 * (((__int64)(v7 + 0x58000000000LL) / 48) & -MiLargePageSizes[v38]) - 0x58000000000LL;
      goto LABEL_33;
    }
    v13 = *(_BYTE *)(v7 + 34);
    v14 = v13 & 7;
    if ( (v13 & 7u) <= 1 )
      break;
    if ( v14 != 5 )
    {
      v15 = *(_BYTE *)(v7 + 35);
      v16 = 0;
      if ( v15 < 0 )
      {
        if ( v14 == 2 )
        {
          if ( *(_WORD *)(v7 + 32) )
            goto LABEL_33;
          goto LABEL_16;
        }
        if ( v14 != 6
          || (v13 & 0x10) != 0
          || *(_WORD *)(v7 + 32) != 1
          || ((v11 >> 54) & 7) == 2
          || (v15 & 8) != 0
          || (*(_DWORD *)v7 & 1) == 0 )
        {
          goto LABEL_33;
        }
      }
      else
      {
        if ( v14 <= 4u )
        {
          if ( *(_WORD *)(v7 + 32) || (a4 & 0x4000000) == 0 && *(__int64 *)(v7 + 8) >= 0 )
            goto LABEL_33;
          goto LABEL_16;
        }
        v17 = (unsigned __int128)((__int64)(v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v18 = (__int64)(v7 + 0x58000000000LL) / 48;
        if ( (v18 & 0xFFFFFFFFFFFFFE00uLL) != v10 )
        {
          v10 = ((__int64)(v7 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
          v19 = MiPfnLargeBitSet(a1, (__int64)(v7 + 0x58000000000LL) / 48);
          if ( v19 != -1 )
          {
            v30 = v8 - 48 * (v18 & -MiLargePageSizes[v19]) + 0x58000000000LL;
            goto LABEL_35;
          }
        }
        if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
          goto LABEL_33;
        if ( ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 2 )
        {
          if ( (a4 & 8) != 0 )
            goto LABEL_33;
          LeafPfnBuddy = MiGetLeafPfnBuddy(v7, v17, v11, v12);
          if ( LeafPfnBuddy == -32 )
            goto LABEL_33;
          if ( !LeafPfnBuddy )
            *a5 = 1;
          goto LABEL_16;
        }
        if ( (a4 & 0x800000) != 0 )
        {
          if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
          {
            if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
              goto LABEL_33;
            goto LABEL_12;
          }
          if ( v18 != (v18 & 0xFFFFFFFFFFFFFFF0uLL) )
            goto LABEL_12;
          v16 = (__int64)(v8 - v7) >= 768;
        }
        else
        {
LABEL_12:
          v16 = 0;
        }
      }
      active = MiActivePageClaimCandidate(a1, v7, 0LL, v12);
      if ( active )
        return (__int64)(v8 + 0x58000000000LL) / 48 - (~(active - 1) & ((__int64)(v7 + 0x58000000000LL) / 48));
      if ( (a4 & 8) != 0 || v16 && (unsigned int)MiClusterVadFull(v7, 0LL) == 1 )
        goto LABEL_33;
      goto LABEL_16;
    }
    if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
      goto LABEL_33;
    if ( (*(_BYTE *)v7 & 1) == 0 )
    {
      v25 = (__int64)(v7 + 0x58000000000LL) / 48;
      v26 = &qword_14043BEE8;
      v27 = 0;
      while ( (PVOID)v25 != *v26 )
      {
        ++v27;
        ++v26;
        if ( v27 >= 4 )
        {
          v28 = 0;
          v29 = &unk_14043BEC8;
          while ( v25 != *v29 )
          {
            ++v28;
            ++v29;
            if ( v28 >= 4 )
              goto LABEL_16;
          }
          break;
        }
      }
LABEL_33:
      v30 = v8 - v7;
LABEL_35:
      v31 = 0x2AAAAAAAAAAAAAABLL;
      return ((__int64)((unsigned __int128)(v30 * (__int128)v31) >> 64) >> 3)
           + ((unsigned __int64)((unsigned __int128)(v30 * (__int128)v31) >> 64) >> 63);
    }
LABEL_16:
    v7 += 48LL;
    if ( v7 >= v8 )
      return 0LL;
  }
  v22 = MiFreeZeroPageSizeIndex(v7);
  if ( v22 == -1 )
    goto LABEL_16;
  v32 = MiLargePageSizes[v22];
  v33 = ((unsigned __int64)((unsigned __int128)((__int64)(v7 - v24) * (__int128)v23) >> 64) >> 63)
      + ((__int64)((unsigned __int128)((__int64)(v7 - v24) * (__int128)v23) >> 64) >> 3);
  if ( v32 >= 0x200 )
    v34 = (a4 & 0x2000000) == 0;
  else
    v34 = (a4 & 0x1000000) == 0;
  if ( v34 )
  {
    v35 = v32 - (v33 & (v32 - 1));
    v36 = (unsigned __int64)((unsigned __int128)((__int64)(v8 - v7) * (__int128)v23) >> 64) >> 63;
    if ( v35 > v36 + ((__int64)((unsigned __int128)((__int64)(v8 - v7) * (__int128)v23) >> 64) >> 3) )
      v35 = v36 + ((__int64)((unsigned __int128)((__int64)(v8 - v7) * (__int128)v23) >> 64) >> 3);
    v7 += 48 * v35 - 48;
    goto LABEL_16;
  }
  v30 = v8 - 48 * (v33 & -(__int64)v32) - v24;
  v31 = v23;
  return ((__int64)((unsigned __int128)(v30 * (__int128)v31) >> 64) >> 3)
       + ((unsigned __int64)((unsigned __int128)(v30 * (__int128)v31) >> 64) >> 63);
}
