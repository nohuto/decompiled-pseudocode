/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00C069C
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C0454 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00C0B30 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r10
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int *v12; // r9
  _QWORD *v13; // r11
  __int64 v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int *v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rtt
  __int64 v25; // r12
  _QWORD *v26; // rdx
  int **v27; // rdi
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rdx
  int ***v30; // rax
  int *v31; // rax
  int **v32; // rcx
  unsigned int *v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rdx
  __int64 v40; // r11
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int *v44; // rcx
  int **v45; // rdx
  int *v46; // rax
  __int64 i; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // r9
  unsigned __int64 *v50; // rdx
  unsigned __int64 v51; // rcx
  int *v52; // rsi
  _QWORD *v53; // rdi
  VIDMM_GLOBAL *v54; // r14
  unsigned __int64 v55; // [rsp+30h] [rbp-61h]
  unsigned __int64 v56; // [rsp+38h] [rbp-59h]
  unsigned int v58; // [rsp+48h] [rbp-49h]
  VIDMM_GLOBAL *v59; // [rsp+58h] [rbp-39h]
  unsigned __int64 v60[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v61[3]; // [rsp+78h] [rbp-19h] BYREF

  v5 = a4;
  v59 = a1;
  v7 = a3[a4 + 77];
  if ( v7 )
  {
    v12 = &a3[4 * a4 + 32];
    memset(v61, 0, sizeof(v61));
    v13 = *(_QWORD **)v12;
    v14 = (__int64)&a3[4 * v5 + 32];
    v15 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 != v14 )
    {
      v16 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v17 = *((int *)v15 - 4);
        v18 = *(v15 - 44);
        v15 = (_QWORD *)*v15;
        v19 = v61[v17];
        if ( v19 <= *(_QWORD *)(v18 + 8 * v16 + 184) )
          v19 = *(_QWORD *)(v18 + 8 * v16 + 184);
        v61[v17] = v19;
      }
      while ( v15 != (_QWORD *)v14 );
    }
    v20 = a5;
    v21 = dword_1C0041FF8;
    v56 = a5;
    memset(v60, 255, sizeof(v60));
    v22 = 3LL;
    while ( 1 )
    {
      v24 = v20;
      v23 = v20 / v7;
      v25 = 0LL;
      v55 = v24 / v7;
      if ( v13 == (_QWORD *)v14 )
        break;
      do
      {
        v26 = v13;
        v27 = (int **)v13;
        v13 = (_QWORD *)*v13;
        v58 = dword_1C0041FF8[*((int *)v26 - 4)];
        v28 = v55 * v58;
        v29 = *(_QWORD *)(*(v26 - 44) + 8 * (*a3 + 37LL * *(unsigned int *)a2) + 184);
        if ( v29 <= v28 )
        {
          v56 -= v29;
          v7 -= v58;
          v25 += v28 - v29;
          if ( (int **)v13[1] != v27 )
            goto LABEL_52;
          v30 = (int ***)v27[1];
          if ( *v30 != v27 )
            goto LABEL_52;
          *v30 = (int **)v13;
          v13[1] = v30;
          v31 = &a3[4 * v5 + 44];
          v32 = (int **)*((_QWORD *)v31 + 1);
          if ( *v32 != v31 )
            goto LABEL_52;
          *v27 = v31;
          v27[1] = (int *)v32;
          *v32 = (int *)v27;
          *((_QWORD *)v31 + 1) = v27;
        }
      }
      while ( v13 != (_QWORD *)v14 );
      if ( !v25 )
      {
        v23 = v55;
        break;
      }
      v33 = dword_1C0041FF8;
      v34 = 0LL;
      v35 = 3LL;
      do
      {
        v36 = v61[v34++];
        v37 = *v33++;
        v38 = v55 * v37;
        if ( v36 >= v38 )
          v36 = v38;
        v60[v34 - 1] = v25 + v36;
        --v35;
      }
      while ( v35 );
      v13 = *(_QWORD **)v12;
      if ( *(int **)v12 == v12 )
        goto LABEL_40;
      v20 = v56;
    }
    v39 = v60;
    v40 = 3LL;
    do
    {
      v41 = *v21++;
      v42 = v23 * v41;
      v43 = *v39;
      if ( *v39 >= v42 )
        v43 = v42;
      *v39++ = v43;
      v23 = v55;
      --v40;
    }
    while ( v40 );
    if ( *(int **)v12 != v12 )
    {
      v44 = &a3[4 * v5 + 44];
      v45 = (int **)*((_QWORD *)v44 + 1);
      if ( *(int **)(*(_QWORD *)v44 + 8LL) != v44
        || *v45 != v44
        || *(int **)(*(_QWORD *)v12 + 8LL) != v12
        || **((int ***)v12 + 1) != v12
        || (*v45 = v12,
            *((_QWORD *)v44 + 1) = *((_QWORD *)v12 + 1),
            **((_QWORD **)v12 + 1) = v44,
            *((_QWORD *)v12 + 1) = v45,
            v46 = *(int **)v12,
            *(int **)(*(_QWORD *)v12 + 8LL) != v12)
        || *v45 != v12 )
      {
LABEL_52:
        __fastfail(3u);
      }
      *v45 = v46;
      *((_QWORD *)v46 + 1) = v45;
      *((_QWORD *)v12 + 1) = v12;
      *(_QWORD *)v12 = v12;
    }
LABEL_40:
    for ( i = 1LL; i < 3; ++i )
    {
      v48 = v60[i - 1];
      if ( v48 > v60[i] )
        v60[i] = v48;
    }
    v49 = 24 * v5 + 40;
    v50 = v60;
    do
    {
      v51 = *v50++;
      if ( v51 >= *((_QWORD *)a3 + 3) )
        v51 = *((_QWORD *)a3 + 3);
      *(_QWORD *)((char *)a3 + v49) = v51;
      v49 += 8LL;
      --v22;
    }
    while ( v22 );
    v52 = &a3[4 * v5 + 44];
    v53 = *(_QWORD **)&a3[4 * v5 + 44];
    if ( v53 != (_QWORD *)v52 )
    {
      v54 = v59;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v54,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v53 - 50),
          v60[*((int *)v53 - 4)]);
        v53 = (_QWORD *)*v53;
      }
      while ( v53 != (_QWORD *)v52 );
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
