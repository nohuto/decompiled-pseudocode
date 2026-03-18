/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C028310C
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0281FAC (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C0282F58 (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_4058988e898109f6ccaece4530a28799_::operator() @ 0x1C0282FBC (_lambda_4058988e898109f6ccaece4530a28799_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C0283058 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // rcx
  struct DMMVIDEOPRESENTTARGET *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edi
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  int v32; // esi
  unsigned int v33; // esi
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned int *v38; // r9
  int v39; // r8d
  __int64 v40; // rax
  unsigned int v41; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v42; // [rsp+2Ch] [rbp-3Dh] BYREF
  unsigned int v43; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v44[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v45[5]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v46[4]; // [rsp+78h] [rbp+Fh] BYREF
  char v47; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int *v48; // [rsp+E0h] [rbp+77h] BYREF

  v48 = a4;
  v5 = *a3;
  v41 = 0;
  v8 = a2;
  v43 = v5;
  v42 = v5;
  if ( v5 < 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
    v13[3] = v8;
    v14 = *((_QWORD *)this + 11);
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
      v15 = *(_QWORD *)(v14 + 8);
    }
    v17 = *(_QWORD *)(v15 + 16);
    v13[6] = 1LL;
LABEL_7:
    v13[5] = -1073741811LL;
    v13[4] = v17;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 57) )
  {
    *(_DWORD *)a5 = 5;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
    v13[3] = v8;
    v20 = *((_QWORD *)this + 11);
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v22);
      v21 = *(_QWORD *)(v20 + 8);
    }
    v17 = *(_QWORD *)(v21 + 16);
    v13[6] = 2LL;
    goto LABEL_7;
  }
  v45[0] = &v41;
  v45[1] = &v47;
  v45[2] = &v48;
  v45[3] = &v42;
  v45[4] = &v43;
  v44[0] = &v42;
  v44[1] = &v41;
  v44[2] = (unsigned int *)&v48;
  v46[0] = &v42;
  v46[1] = &v43;
  v46[2] = &v48;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v44, v8 | 0x80000000);
  if ( v42 >= v43 )
  {
    v36 = v41;
  }
  else
  {
    do
    {
      v23 = lambda_4058988e898109f6ccaece4530a28799_::operator()((__int64)v46);
      v25 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v23 & 0x7FFFFFFF);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( !*((_QWORD *)v25 + 57) && v23 < 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = *((_QWORD *)v25 + 64);
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v45, v29) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v44, v29);
      }
      v30 = (_QWORD *)((char *)v25 + 424);
      v31 = (_QWORD *)*((_QWORD *)v25 + 53);
      while ( v31 != v30 )
      {
        v32 = *((_DWORD *)v31 - 104);
        v31 = (_QWORD *)*v31;
        v33 = v32 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v45, v33) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v44, v33);
      }
      v34 = v41;
      if ( v41 >= v42 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v35);
        v34 = v41;
      }
      v48[v34] = v23;
      v36 = ++v41;
    }
    while ( v42 < v43 );
  }
  *a3 = 0;
  v37 = 0LL;
  if ( v36 )
  {
    v38 = v48;
    do
    {
      v39 = v38[v37];
      if ( v39 < 0 )
      {
        v40 = *a3;
        v38[v40] = v39 & 0x7FFFFFFF;
        v38 = v48;
        v36 = v41;
        *a3 = v40 + 1;
      }
      v37 = (unsigned int)(v37 + 1);
    }
    while ( (unsigned int)v37 < v36 );
  }
  return 0LL;
}
