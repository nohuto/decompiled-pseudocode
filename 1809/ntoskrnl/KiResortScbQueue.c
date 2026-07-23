/*
 * XREFs of KiResortScbQueue @ 0x140117220
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x1400D3720 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140116A70 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveThreadFromScbQueue @ 0x140116EA8 (KiRemoveThreadFromScbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1401170AC (KiInsertNonMaxOverQuotaScb.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x14011710C (KiInsertSchedulingGroupQueue.c)
 */

char __fastcall KiResortScbQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  unsigned __int64 *i; // rax
  unsigned __int64 v6; // rcx
  __int64 j; // rcx
  unsigned __int64 v8; // r8
  __int64 k; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  int v12; // edx
  int v13; // edx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  int v16; // r8d
  unsigned __int64 **v17; // rdx

  i = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *i;
    if ( *i )
    {
      for ( i = *(unsigned __int64 **)(v6 + 8); i; i = (unsigned __int64 *)i[1] )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == i )
          break;
        i = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return (char)i;
    v13 = *(_DWORD *)(a2 + 116);
    LODWORD(i) = v13 - *(_DWORD *)(v6 + 28);
    if ( v13 != *(_DWORD *)(v6 + 28) )
      goto LABEL_26;
    v14 = *(_WORD *)(a2 + 114);
    if ( v14 )
    {
      v15 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v16, v14);
      LODWORD(i) = 0;
      if ( v15 )
        _BitScanReverse((unsigned int *)&i, v15);
      LODWORD(i) = (_DWORD)i - v16;
LABEL_26:
      if ( (int)i >= 0 )
        return (char)i;
      goto LABEL_18;
    }
    if ( v13 )
    {
      LODWORD(i) = 1;
      goto LABEL_26;
    }
    i = *(unsigned __int64 **)(v6 - 88);
    if ( *(_QWORD *)a2 > (unsigned __int64)i )
      return (char)i;
LABEL_18:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    LOBYTE(i) = KiInsertSchedulingGroupQueue(a1, a2, 0);
    return (char)i;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v17 = *(unsigned __int64 ***)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        i = *v17;
        v8 = (unsigned __int64)v17;
        v17 = (unsigned __int64 **)i;
      }
      while ( i );
    }
  }
  else
  {
    for ( k = *(_QWORD *)(a2 + 104); ; k = *(_QWORD *)(v8 + 16) )
    {
      v8 = k & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == i )
        break;
      i = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    LODWORD(i) = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !(_DWORD)i )
    {
      v10 = *(_WORD *)(a2 + 114);
      if ( v10 )
      {
        v11 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v12, v10);
        LODWORD(i) = 0;
        if ( v11 )
          _BitScanReverse((unsigned int *)&i, v11);
        LODWORD(i) = (_DWORD)i - v12;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          i = *(unsigned __int64 **)(v8 - 88);
          if ( *(_QWORD *)a2 <= (unsigned __int64)i )
            return (char)i;
          goto LABEL_18;
        }
        LODWORD(i) = 1;
      }
    }
    if ( (int)i <= 0 )
      return (char)i;
    goto LABEL_18;
  }
  return (char)i;
}
