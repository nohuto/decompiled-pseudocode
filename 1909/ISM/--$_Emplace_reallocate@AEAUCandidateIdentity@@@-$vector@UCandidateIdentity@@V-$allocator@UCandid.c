/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x180100DEC
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x180101D94 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180102588 (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // [rsp+80h] [rbp+8h]

  v6 = ((__int64)a2 - *a1) / 40;
  v7 = (a1[1] - *a1) / 40LL;
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 40LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v11 = v9 + v10;
    if ( v9 + v10 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 40 * v11;
  if ( v11 > 0x666666666666666LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v25 = 40 * v6;
  v14 = (__int64)&v13[5 * v6];
  try
  {
    std::wstring::wstring(v14);
  }
  catch ( ... )
  {
    std::vector<CandidateIdentity>::_Destroy(v15, v14 + 40, v14 + 40);
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(40 * v11));
    throw;
  }
  *(_DWORD *)(v14 + 32) = *(_DWORD *)(a3 + 32);
  v16 = (_QWORD *)a1[1];
  if ( a2 == v16 )
  {
    if ( (_QWORD *)*a1 != v16 )
    {
      v17 = v13 + 3;
      v18 = *a1 - (_QWORD)v13;
      do
      {
        *(v17 - 1) = 0LL;
        *v17 = 0LL;
        *(_OWORD *)(v17 - 3) = *(_OWORD *)((char *)v17 + v18 - 24);
        *(_OWORD *)(v17 - 1) = *(_OWORD *)((char *)v17 + v18 - 8);
        *(_QWORD *)((char *)v17 + v18 - 8) = 0LL;
        *(_QWORD *)((char *)v17 + v18) = 7LL;
        *(_WORD *)((char *)v17 + v18 - 24) = 0;
        *((_DWORD *)v17 + 2) = *(_DWORD *)((char *)v17 + v18 + 8);
        v17 += 5;
      }
      while ( (_QWORD *)((char *)v17 + v18 - 24) != v16 );
    }
LABEL_14:
    v19 = v25;
    goto LABEL_15;
  }
  if ( (_QWORD *)*a1 != a2 )
  {
    v21 = v13 + 3;
    v22 = *a1 - (_QWORD)v13;
    do
    {
      *(v21 - 1) = 0LL;
      *v21 = 0LL;
      *(_OWORD *)(v21 - 3) = *(_OWORD *)((char *)v21 + v22 - 24);
      *(_OWORD *)(v21 - 1) = *(_OWORD *)((char *)v21 + v22 - 8);
      *(_QWORD *)((char *)v21 + v22 - 8) = 0LL;
      *(_QWORD *)((char *)v21 + v22) = 7LL;
      *(_WORD *)((char *)v21 + v22 - 24) = 0;
      *((_DWORD *)v21 + 2) = *(_DWORD *)((char *)v21 + v22 + 8);
      v21 += 5;
    }
    while ( (_QWORD *)((char *)v21 + v22 - 24) != a2 );
    v16 = (_QWORD *)a1[1];
  }
  if ( a2 == v16 )
    goto LABEL_14;
  v23 = v14 + 64;
  v19 = v25;
  v24 = (char *)&a2[v25 / 0xFFFFFFFFFFFFFFF8uLL] - (char *)v13;
  do
  {
    *(_QWORD *)(v23 - 8) = 0LL;
    *(_QWORD *)v23 = 0LL;
    *(_OWORD *)(v23 - 24) = *(_OWORD *)(v24 + v23 - 64);
    *(_OWORD *)(v23 - 8) = *(_OWORD *)(v24 + v23 - 48);
    *(_QWORD *)(v24 + v23 - 48) = 0LL;
    *(_QWORD *)(v24 + v23 - 40) = 7LL;
    *(_WORD *)(v24 + v23 - 64) = 0;
    *(_DWORD *)(v23 + 8) = *(_DWORD *)(v24 + v23 - 32);
    v23 += 40LL;
  }
  while ( (_QWORD *)(v24 + v23 - 64) != v16 );
LABEL_15:
  std::vector<CandidateIdentity>::_Change_array(a1, v13, v8, v11);
  return v19 + *a1;
}
