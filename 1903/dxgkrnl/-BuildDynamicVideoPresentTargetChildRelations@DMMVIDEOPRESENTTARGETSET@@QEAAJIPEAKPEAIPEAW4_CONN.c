/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB3AC
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02B9FEC (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C02BB1F8 (_lambda_06c7fb13e4115b68176da9e8404c9d66_--operator().c)
 *     _lambda_4058988e898109f6ccaece4530a28799_::operator() @ 0x1C02BB25C (_lambda_4058988e898109f6ccaece4530a28799_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C02BB2F8 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r12d
  __int64 v28; // rcx
  struct DMMVIDEOPRESENTTARGET *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // edi
  _QWORD *v34; // rdi
  _QWORD *v35; // rbx
  int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rdx
  unsigned int *v42; // r9
  int v43; // r8d
  __int64 v44; // rax
  unsigned int v45; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v46; // [rsp+2Ch] [rbp-3Dh] BYREF
  unsigned int v47; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v48[3]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v49[5]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v50[4]; // [rsp+78h] [rbp+Fh] BYREF
  char v51; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int *v52; // [rsp+E0h] [rbp+77h] BYREF

  v52 = a4;
  v5 = *a3;
  v45 = 0;
  v8 = (unsigned int)a2;
  v47 = v5;
  v46 = v5;
  if ( v5 < 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v15[3] = v8;
    v16 = *((_QWORD *)this + 11);
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_QWORD *)(v16 + 8);
    }
    v19 = *(_QWORD *)(v17 + 16);
    v15[6] = 1LL;
LABEL_7:
    v15[5] = -1073741811LL;
    v15[4] = v19;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v15[3] = v8;
    v23 = *((_QWORD *)this + 11);
    v24 = *(_QWORD *)(v23 + 8);
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v25);
      v24 = *(_QWORD *)(v23 + 8);
    }
    v19 = *(_QWORD *)(v24 + 16);
    v15[6] = 2LL;
    goto LABEL_7;
  }
  v49[0] = &v45;
  v49[1] = &v51;
  v49[2] = &v52;
  v49[3] = &v46;
  v49[4] = &v47;
  v48[0] = &v46;
  v48[1] = &v45;
  v48[2] = (unsigned int *)&v52;
  v50[0] = &v46;
  v50[1] = &v47;
  v50[2] = &v52;
  lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v48, (unsigned int)v8 | 0x80000000);
  if ( v46 >= v47 )
  {
    v40 = v45;
  }
  else
  {
    do
    {
      v27 = lambda_4058988e898109f6ccaece4530a28799_::operator()((__int64)v50, v26);
      v29 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v27 & 0x7FFFFFFF);
      if ( !v29 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28, v26);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( !*((_QWORD *)v29 + 59) && v27 < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28, v26);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = *((_QWORD *)v29 + 66);
      if ( v32 )
      {
        v33 = *(_DWORD *)(v32 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v49, v33) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v48, v33);
      }
      v34 = (_QWORD *)((char *)v29 + 440);
      v35 = (_QWORD *)*((_QWORD *)v29 + 55);
      while ( v35 != v34 )
      {
        v36 = *((_DWORD *)v35 - 108);
        v35 = (_QWORD *)*v35;
        v37 = v36 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v49, v37) )
          lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(v48, v37);
      }
      v38 = v45;
      if ( v45 >= v46 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v28, v26);
        WdLogEvent5_WdAssertion(v39);
        v38 = v45;
      }
      v52[v38] = v27;
      v40 = ++v45;
    }
    while ( v46 < v47 );
  }
  *a3 = 0;
  v41 = 0LL;
  if ( v40 )
  {
    v42 = v52;
    do
    {
      v43 = v42[v41];
      if ( v43 < 0 )
      {
        v44 = *a3;
        v42[v44] = v43 & 0x7FFFFFFF;
        v42 = v52;
        v40 = v45;
        *a3 = v44 + 1;
      }
      v41 = (unsigned int)(v41 + 1);
    }
    while ( (unsigned int)v41 < v40 );
  }
  return 0LL;
}
