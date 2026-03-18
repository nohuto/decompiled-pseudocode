/*
 * XREFs of ??$_Insert_range@PEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UtagRECT@@@std@@@std@@@1@PEBUtagRECT@@1Uforward_iterator_tag@1@@Z @ 0x18003A4B4
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x18003A468 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<tagRECT>::_Insert_range<tagRECT const *>(_QWORD *a1, char *a2, const void *a3, __int64 a4)
{
  size_t v4; // r12
  __int64 v5; // r15
  unsigned __int64 v7; // rbp
  const char *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  SIZE_T v17; // rcx
  char *v18; // r14
  char *v19; // rcx
  char *v20; // rdx
  size_t v21; // r8
  size_t v22; // r14
  __int64 v23; // r15
  char v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]

  v4 = a4 - (_QWORD)a3;
  v5 = (__int64)&a2[-*a1] >> 4;
  v7 = (a4 - (__int64)a3) >> 4;
  v24 = 1;
  if ( v7 == 1 && a2 == (char *)a1[1] || (v24 = 0, v7) )
  {
    v10 = (const char *)a1[2];
    v11 = a1[1];
    if ( v7 <= (__int64)&v10[-v11] >> 4 )
    {
      v22 = v11 - (_QWORD)a2;
      v23 = 16 * v7;
      if ( v7 < (v11 - (__int64)a2) >> 4 )
      {
        memmove_0((void *)a1[1], (const void *)(v11 - v23), 16 * v7);
        a1[1] = v23 + v11;
        memmove_0(&a2[16 * v7], a2, v11 + -16LL * v7 - (_QWORD)a2);
      }
      else
      {
        memmove_0(&a2[v23], a2, v22);
        a1[1] = &a2[v23 + v22];
      }
      memmove_0(a2, a3, v4);
    }
    else
    {
      v12 = (v11 - *a1) >> 4;
      if ( v7 > 0xFFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error(v10);
      v13 = (__int64)&v10[-*a1] >> 4;
      v14 = v7 + v12;
      v15 = v13 >> 1;
      if ( v13 > 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v16 = v14;
      }
      else
      {
        v16 = v15 + v13;
        if ( v15 + v13 < v14 )
          v16 = v14;
      }
      v17 = 16 * v16;
      v25 = 16 * v16;
      if ( v16 > 0xFFFFFFFFFFFFFFFLL )
        v17 = -1LL;
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v17);
      memmove_0(&v18[16 * v5], a3, v4);
      v19 = v18;
      v20 = (char *)*a1;
      if ( v24 )
      {
        v21 = a1[1] - (_QWORD)v20;
      }
      else
      {
        memmove_0(v18, v20, (size_t)&a2[-*a1]);
        v21 = a1[1] - (_QWORD)a2;
        v19 = &v18[16 * v5 + 16 * v7];
        v20 = a2;
      }
      memmove_0(v19, v20, v21);
      if ( *a1 )
        std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = v18;
      a1[1] = &v18[16 * v14];
      a1[2] = &v18[v25];
    }
  }
}
