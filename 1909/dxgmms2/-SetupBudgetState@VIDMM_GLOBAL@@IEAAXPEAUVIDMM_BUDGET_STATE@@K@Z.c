/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00C3B40
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005C568 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00801E8 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0082850 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C3954 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  struct VIDMM_BUDGET_STATE *v6; // r8
  struct VIDMM_BUDGET_STATE *v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  char *v20; // rdi
  __int64 *v21; // rdi
  __int64 v22; // r15
  _QWORD *v23; // rbx
  VIDMM_GLOBAL *v24; // rcx
  VIDMM_PROCESS *v25; // rax
  struct DXGPROCESS *v26; // rdx
  int *v27; // rbp
  __int64 v28; // rdx
  _QWORD *v29; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v30; // esi
  _QWORD *v31; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  int v33; // ebp
  __int64 v34; // rdi
  struct VIDMM_BUDGET_STATE *v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *j; // rbx
  _QWORD **v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  struct VIDMM_PHYSICAL_ADAPTER *v42; // [rsp+20h] [rbp-68h]
  _BYTE v43[96]; // [rsp+28h] [rbp-60h] BYREF
  struct VIDMM_BUDGET_STATE *v44; // [rsp+90h] [rbp+8h]
  __int64 v45; // [rsp+98h] [rbp+10h]
  __int64 v47; // [rsp+A8h] [rbp+20h]

  *(_DWORD *)a2 = a3;
  v4 = 0;
  v45 = a3;
  v5 = a3;
  v6 = (struct VIDMM_BUDGET_STATE *)(1560LL * a3);
  v44 = v6;
  v42 = (struct VIDMM_BUDGET_STATE *)((char *)v6 + *((_QWORD *)this + 5023));
  v7 = v6;
  v8 = ((*((_BYTE *)v42 + 437) & 8) != 0) + 1LL;
  v47 = v8;
  v9 = 0LL;
  do
  {
    v10 = *((_QWORD *)this + 5023);
    if ( (*((_BYTE *)v7 + v10 + 512) & 1) == 0 )
    {
      v19 = 3LL;
      v20 = (char *)v6 + 328 * v4 + v10;
      do
      {
        memset(v20 + 768, 0, 0x60uLL);
        --v19;
      }
      while ( v19 );
LABEL_21:
      v5 = v45;
      v6 = v44;
      goto LABEL_22;
    }
    v11 = VIDMM_PARTITION::_PartitionTree;
    i = 0LL;
    while ( v11 )
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
    if ( i )
    {
      v13 = 328 * v5;
      do
      {
        v14 = 3LL;
        v15 = *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + i[5] + 24);
        do
        {
          memset((void *)(v15 + v13 + 224), 0, 0x60uLL);
          --v14;
        }
        while ( v14 );
        v16 = (_QWORD **)i[1];
        v17 = i;
        if ( v16 )
        {
          v18 = *v16;
          for ( i = (_QWORD *)i[1]; v18; v18 = (_QWORD *)*v18 )
            i = v18;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v17 )
              break;
            v17 = i;
          }
        }
      }
      while ( i );
      v8 = v47;
      goto LABEL_21;
    }
LABEL_22:
    ++v4;
    ++v9;
    v7 = (struct VIDMM_BUDGET_STATE *)((char *)v7 + 24);
  }
  while ( v9 < v8 );
  v21 = (__int64 *)*((_QWORD *)this + 5126);
  if ( v21 != (__int64 *)((char *)this + 41008) )
  {
    v22 = 296 * v5;
    do
    {
      v23 = (_QWORD *)(v22 + v21[3]);
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v43, (struct DXGPUSHLOCK *const)(v21 + 42));
      v23[23] = v23[17];
      v23[24] = v23[18];
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      v23[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v23);
      v25 = (VIDMM_PROCESS *)v21[2];
      v26 = (struct DXGPROCESS *)*((_QWORD *)v25 + 4);
      if ( v26 && v25 != g_pVidMmSystemProcess )
      {
        v27 = (int *)(v21 + 46);
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v24,
          v26,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)(v21 + 46),
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)(v21 + 45));
        v28 = *v23;
        if ( *v23 )
        {
          if ( *(_QWORD **)(v28 + 8) != v23 || (v29 = (_QWORD *)v23[1], (_QWORD *)*v29 != v23) )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          *v23 = 0LL;
          v23[1] = 0LL;
        }
        v30 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
        v31 = v23 + 7;
        do
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                this,
                                a3,
                                v30,
                                *(struct VIDMM_PARTITION **)(v21[2] + 264));
          *((_QWORD *)SegmentGroupState + *v27 + 28) += v31[16];
          if ( *v31 )
          {
            *((_QWORD *)SegmentGroupState + *v27 + 34) += *v31;
            ++*((_DWORD *)SegmentGroupState + *v27 + 74);
          }
          ++v30;
          ++v31;
        }
        while ( v30 < 2 );
        v8 = v47;
      }
      v21 = (__int64 *)*v21;
    }
    while ( v21 != (__int64 *)((char *)this + 41008) );
  }
  v33 = 0;
  v34 = 0LL;
  v35 = v44;
  do
  {
    v36 = *((_QWORD *)this + 5023);
    if ( (*((_BYTE *)v35 + v36 + 512) & 1) != 0 )
    {
      v37 = VIDMM_PARTITION::_PartitionTree;
      j = 0LL;
      while ( v37 )
      {
        j = v37;
        v37 = (_QWORD *)*v37;
      }
      if ( j )
      {
        do
        {
          VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
            this,
            v42,
            v6,
            (struct VIDMM_SEGMENT_GROUP_STATE *)(328 * v45
                                               + *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL)
                                                           + j[5]
                                                           + 24)));
          v39 = (_QWORD **)j[1];
          v40 = j;
          if ( v39 )
          {
            v41 = *v39;
            for ( j = (_QWORD *)j[1]; v41; v41 = (_QWORD *)*v41 )
              j = v41;
          }
          else
          {
            while ( 1 )
            {
              j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !j || (_QWORD *)*j == v40 )
                break;
              v40 = j;
            }
          }
        }
        while ( j );
        v8 = v47;
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v42,
        v6,
        (struct VIDMM_BUDGET_STATE *)((char *)v44 + 328 * v33 + v36 + 544));
    }
    ++v33;
    ++v34;
    v35 = (struct VIDMM_BUDGET_STATE *)((char *)v35 + 24);
  }
  while ( v34 < v8 );
}
