/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x180101D94
 * Callers:
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x180104690 (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006F294 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x180100DEC (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801018B0 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x180101D10 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x18010273C (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, __int64 **a5)
{
  const struct D2D_VECTOR_2F *v5; // rax
  int v7; // esi
  unsigned int v8; // ebx
  char v9; // di
  __int64 v10; // r8
  unsigned int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 *v17; // r15
  __int64 v18; // r13
  unsigned int v20; // [rsp+20h] [rbp-60h]
  unsigned int v21; // [rsp+24h] [rbp-5Ch]
  char v23; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-40h] BYREF
  char v25[16]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+68h] [rbp-18h]

  v5 = a4;
  v20 = a3;
  v21 = a2;
  v7 = 0;
  v8 = 0;
  if ( *a5 )
  {
    v9 = 1;
    while ( 1 )
    {
      v10 = **a5;
      if ( v8 >= (unsigned __int64)(((*a5)[1] - v10) / 40) )
        goto LABEL_24;
      if ( Edges::FindEdge(this, (const struct CandidateIdentity *)(v10 + 40LL * v8)) < 0 )
        break;
      if ( Edge::HitTest((Edge *)(*(_QWORD *)this + 104LL * v8), v21, v20, a4) )
      {
        ++v7;
        ++v8;
      }
      else
      {
        v11 = &v24;
LABEL_6:
        std::vector<CandidateIdentity>::erase(*a5, v11, **a5 + 40LL * v8);
      }
    }
    v11 = (unsigned int *)&v23;
    goto LABEL_6;
  }
  v12 = *(_QWORD *)this;
  v13 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this == v13 )
    return 0;
  v9 = 1;
  do
  {
    if ( Edge::HitTest((Edge *)v12, a2, a3, v5) )
    {
      if ( *a5 || (v14 = (__int64 *)operator new(0x18uLL), *v14 = 0LL, v14[1] = 0LL, v14[2] = 0LL, (*a5 = v14) != 0LL) )
      {
        v26 = 0LL;
        v27 = 7LL;
        *(_WORD *)v25 = 0;
        v28 = 0;
        v15 = (_QWORD *)(v12 + 8);
        if ( *(_QWORD *)(v12 + 32) >= 8uLL )
          v15 = (_QWORD *)*v15;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_WORD *)v15 + v16) );
        std::wstring::assign(v25, v15, v16);
        v28 = *(_DWORD *)(v12 + 64);
        v17 = *a5;
        v18 = (*a5)[1];
        if ( (*a5)[2] == v18 )
        {
          std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
            *a5,
            (_QWORD *)(*a5)[1],
            (__int64)v25);
        }
        else
        {
          std::wstring::wstring((*a5)[1]);
          *(_DWORD *)(v18 + 32) = v28;
          v17[1] += 40LL;
        }
        ++v7;
        std::wstring::_Tidy_deallocate((__int64)v25);
      }
    }
    v12 += 104LL;
    v5 = a4;
    a3 = v20;
    a2 = v21;
  }
  while ( v12 != v13 );
LABEL_24:
  if ( !v7 )
    return 0;
  return v9;
}
