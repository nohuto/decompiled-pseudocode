/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00C32BC
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C3074 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00C3750 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r11
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int *v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int *v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rtt
  __int64 v24; // r12
  _QWORD *v25; // rdx
  int **v26; // rdi
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  int ***v29; // rax
  int *v30; // rax
  int **v31; // rcx
  unsigned int *v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // rdx
  __int64 v39; // r10
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  int *v43; // rcx
  int **v44; // rdx
  int *v45; // rax
  __int64 i; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // r9
  unsigned __int64 *v49; // rdx
  unsigned __int64 v50; // rcx
  int *v51; // rsi
  _QWORD *v52; // rdi
  VIDMM_GLOBAL *v53; // r14
  unsigned __int64 v54; // [rsp+30h] [rbp-61h]
  unsigned __int64 v55; // [rsp+38h] [rbp-59h]
  unsigned int v57; // [rsp+48h] [rbp-49h]
  VIDMM_GLOBAL *v58; // [rsp+58h] [rbp-39h]
  unsigned __int64 v59[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v60[3]; // [rsp+78h] [rbp-19h] BYREF

  v5 = a4;
  v58 = a1;
  v7 = a3[a4 + 77];
  if ( v7 )
  {
    v12 = &a3[4 * a4 + 32];
    memset(v60, 0, sizeof(v60));
    v13 = *(_QWORD **)v12;
    v14 = (__int64)&a3[4 * v5 + 32];
    if ( *(_QWORD *)v12 != v14 )
    {
      v15 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v16 = *((int *)v13 - 4);
        v17 = *(v13 - 44);
        v13 = (_QWORD *)*v13;
        v18 = v60[v16];
        if ( v18 <= *(_QWORD *)(v17 + 8 * v15 + 184) )
          v18 = *(_QWORD *)(v17 + 8 * v15 + 184);
        v60[v16] = v18;
      }
      while ( v13 != (_QWORD *)v14 );
      v13 = *(_QWORD **)v12;
    }
    v19 = a5;
    v20 = dword_1C0042040;
    v55 = a5;
    memset(v59, 255, sizeof(v59));
    v21 = 3LL;
    while ( 1 )
    {
      v23 = v19;
      v22 = v19 / v7;
      v24 = 0LL;
      v54 = v23 / v7;
      if ( v13 == (_QWORD *)v14 )
        break;
      do
      {
        v25 = v13;
        v26 = (int **)v13;
        v13 = (_QWORD *)*v13;
        v57 = dword_1C0042040[*((int *)v25 - 4)];
        v27 = v54 * v57;
        v28 = *(_QWORD *)(*(v25 - 44) + 8 * (*a3 + 37LL * *(unsigned int *)a2) + 184);
        if ( v28 <= v27 )
        {
          v55 -= v28;
          v7 -= v57;
          v24 += v27 - v28;
          if ( (int **)v13[1] != v26 )
            goto LABEL_53;
          v29 = (int ***)v26[1];
          if ( *v29 != v26 )
            goto LABEL_53;
          *v29 = (int **)v13;
          v13[1] = v29;
          v30 = &a3[4 * v5 + 44];
          v31 = (int **)*((_QWORD *)v30 + 1);
          if ( *v31 != v30 )
            goto LABEL_53;
          *v26 = v30;
          v26[1] = (int *)v31;
          *v31 = (int *)v26;
          *((_QWORD *)v30 + 1) = v26;
        }
      }
      while ( v13 != (_QWORD *)v14 );
      if ( !v24 )
      {
        v22 = v54;
        break;
      }
      v32 = dword_1C0042040;
      v33 = 0LL;
      v34 = 3LL;
      do
      {
        v35 = v60[v33++];
        v36 = *v32++;
        v37 = v54 * v36;
        if ( v35 >= v37 )
          v35 = v37;
        v59[v33 - 1] = v24 + v35;
        --v34;
      }
      while ( v34 );
      v13 = *(_QWORD **)v12;
      if ( *(int **)v12 == v12 )
        goto LABEL_41;
      v19 = v55;
    }
    v38 = v59;
    v39 = 3LL;
    do
    {
      v40 = *v20++;
      v41 = v22 * v40;
      v42 = *v38;
      if ( *v38 >= v41 )
        v42 = v41;
      *v38++ = v42;
      v22 = v54;
      --v39;
    }
    while ( v39 );
    if ( *(int **)v12 != v12 )
    {
      v43 = &a3[4 * v5 + 44];
      v44 = (int **)*((_QWORD *)v43 + 1);
      if ( *(int **)(*(_QWORD *)v43 + 8LL) != v43
        || *v44 != v43
        || *(int **)(*(_QWORD *)v12 + 8LL) != v12
        || **((int ***)v12 + 1) != v12
        || (*v44 = v12,
            *((_QWORD *)v43 + 1) = *((_QWORD *)v12 + 1),
            **((_QWORD **)v12 + 1) = v43,
            *((_QWORD *)v12 + 1) = v44,
            v45 = *(int **)v12,
            *(int **)(*(_QWORD *)v12 + 8LL) != v12)
        || *v44 != v12 )
      {
LABEL_53:
        __fastfail(3u);
      }
      *v44 = v45;
      *((_QWORD *)v45 + 1) = v44;
      *((_QWORD *)v12 + 1) = v12;
      *(_QWORD *)v12 = v12;
    }
LABEL_41:
    for ( i = 1LL; i < 3; ++i )
    {
      v47 = v59[i - 1];
      if ( v47 > v59[i] )
        v59[i] = v47;
    }
    v48 = 24 * v5 + 40;
    v49 = v59;
    do
    {
      v50 = *v49++;
      if ( v50 >= *((_QWORD *)a3 + 3) )
        v50 = *((_QWORD *)a3 + 3);
      *(_QWORD *)((char *)a3 + v48) = v50;
      v48 += 8LL;
      --v21;
    }
    while ( v21 );
    v51 = &a3[4 * v5 + 44];
    v52 = *(_QWORD **)&a3[4 * v5 + 44];
    if ( v52 != (_QWORD *)v51 )
    {
      v53 = v58;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v53,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v52 - 50),
          v59[*((int *)v52 - 4)]);
        v52 = (_QWORD *)*v52;
      }
      while ( v52 != (_QWORD *)v51 );
    }
  }
  else
  {
    v8 = *((_QWORD *)a3 + 3);
    v9 = 3LL;
    v10 = a5;
    if ( a5 >= v8 )
      v10 = v8;
    v11 = 6LL * a4;
    do
    {
      *(_QWORD *)&a3[v11 + 10] = v10;
      v11 += 2LL;
      --v9;
    }
    while ( v9 );
  }
}
