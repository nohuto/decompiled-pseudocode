/*
 * XREFs of KiResortScbQueue @ 0x1400E9074
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x1400156CC (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400E8418 (KiRecomputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400E8D10 (KiRemoveThreadFromScbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400E8EEC (KiInsertNonMaxOverQuotaScb.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400E8DBC (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400E8F4C (KiInsertSchedulingGroupQueue.c)
 */

void __fastcall KiResortScbQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r8
  __int64 j; // r8
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // dx
  int v20; // r8d
  int v21; // eax

  v3 = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *v3;
    if ( *v3 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 104); ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v3 )
          break;
        v3 = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return;
    v16 = *(_DWORD *)(a2 + 116);
    v17 = v16 - *(_DWORD *)(v6 + 28);
    if ( v16 != *(_DWORD *)(v6 + 28) )
      goto LABEL_31;
    v18 = *(_WORD *)(a2 + 114);
    if ( v18 )
    {
      v19 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v20, v18);
      v21 = 0;
      if ( v19 )
        _BitScanReverse((unsigned int *)&v21, v19);
      v17 = v21 - v20;
LABEL_31:
      if ( v17 >= 0 )
        return;
      goto LABEL_25;
    }
    if ( v16 )
    {
      v17 = 1;
      goto LABEL_31;
    }
    if ( *(_QWORD *)a2 > *(_QWORD *)(v6 - 88) )
      return;
LABEL_25:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    KiInsertSchedulingGroupQueue((__int64)a1, a2, 0);
    return;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v10 = *(_QWORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        v8 = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == v3 )
        break;
      v3 = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    v11 = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !v11 )
    {
      v12 = *(_WORD *)(a2 + 114);
      if ( v12 )
      {
        v13 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v14, v12);
        v15 = 0;
        if ( v13 )
          _BitScanReverse((unsigned int *)&v15, v13);
        v11 = v15 - v14;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          if ( *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
            return;
          goto LABEL_25;
        }
        v11 = 1;
      }
    }
    if ( v11 <= 0 )
      return;
    goto LABEL_25;
  }
}
