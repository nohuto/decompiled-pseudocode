/*
 * XREFs of ??$_Insert_range@PEAPEAVCTransform@@@?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform@@@std@@@std@@@1@PEAPEAVCTransform@@1Uforward_iterator_tag@1@@Z @ 0x18001CDC8
 * Callers:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001CD24 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<CTransform *>::_Insert_range<CTransform * *>(
        _QWORD *a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v4; // r12
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  char v7; // r13
  const char *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  SIZE_T v17; // rcx
  char *v18; // rdi
  char *v19; // rdx
  char *v20; // rcx
  size_t v21; // r8
  size_t v22; // r14
  __int64 v23; // r15
  char *v24; // rdi
  __int64 v25; // [rsp+60h] [rbp+8h]

  v4 = a4 - (_QWORD)a3;
  v5 = (__int64)&a2[-*a1] >> 3;
  v6 = (a4 - (__int64)a3) >> 3;
  v7 = 1;
  if ( v6 == 1 && a2 == (char *)a1[1] || (v7 = 0, v6) )
  {
    v10 = (const char *)a1[2];
    v11 = a1[1];
    if ( v6 <= (__int64)&v10[-v11] >> 3 )
    {
      v22 = v11 - (_QWORD)a2;
      v23 = 8 * v6;
      if ( v6 >= (v11 - (__int64)a2) >> 3 )
      {
        v24 = &a2[v23];
        memmove_0(&a2[v23], a2, v22);
        a1[1] = &v24[v22];
      }
      else
      {
        memmove_0((void *)a1[1], (const void *)(v11 - v23), 8 * v6);
        a1[1] = v23 + v11;
        memmove_0(&a2[8 * v6], a2, v11 + -8LL * v6 - (_QWORD)a2);
      }
      memmove_0(a2, a3, v4);
    }
    else
    {
      v12 = (v11 - *a1) >> 3;
      if ( v6 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error(v10);
      v13 = v12 + v6;
      v14 = (__int64)&v10[-*a1] >> 3;
      v15 = v14 >> 1;
      if ( v14 > 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v16 = v12 + v6;
      }
      else
      {
        v16 = v15 + v14;
        if ( v15 + v14 < v13 )
          v16 = v12 + v6;
      }
      v17 = 8 * v16;
      v25 = 8 * v16;
      if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
        v17 = -1LL;
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v17);
      memmove_0(&v18[8 * v5], a3, v4);
      v19 = (char *)*a1;
      v20 = v18;
      if ( v7 )
      {
        v21 = a1[1] - *a1;
      }
      else
      {
        memmove_0(v18, v19, a2 - v19);
        v21 = a1[1] - (_QWORD)a2;
        v20 = &v18[8 * v5 + 8 * v6];
        v19 = a2;
      }
      memmove_0(v20, v19, v21);
      if ( *a1 )
        std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *a1 = v18;
      a1[1] = &v18[8 * v13];
      a1[2] = &v18[v25];
    }
  }
}
