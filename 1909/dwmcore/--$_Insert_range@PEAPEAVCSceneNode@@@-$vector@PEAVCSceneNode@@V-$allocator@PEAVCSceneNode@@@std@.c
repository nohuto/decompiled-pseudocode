/*
 * XREFs of ??$_Insert_range@PEAPEAVCSceneNode@@@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneNode@@@std@@@std@@@1@PEAPEAVCSceneNode@@1Uforward_iterator_tag@1@@Z @ 0x18019ADB0
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A0A54 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A0AFC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A0BB8 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001C0CC (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<CSceneNode *>::_Insert_range<CSceneNode * *>(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v4; // r13
  __int64 v5; // r12
  unsigned __int64 v7; // rsi
  const char *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  SIZE_T v17; // rcx
  char *v18; // r15
  char *v19; // rcx
  char *v20; // rdx
  size_t v21; // r8
  size_t v22; // r15
  __int64 v23; // r12
  char v24; // [rsp+60h] [rbp+8h]

  v4 = a4 - (_QWORD)a3;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (a4 - (__int64)a3) >> 3;
  v24 = 1;
  if ( v7 == 1 && a2 == *(char **)(a1 + 8) || (v24 = 0, v7) )
  {
    v10 = *(const char **)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    if ( v7 <= (__int64)&v10[-v11] >> 3 )
    {
      v22 = v11 - (_QWORD)a2;
      v23 = 8 * v7;
      if ( v7 >= (v11 - (__int64)a2) >> 3 )
      {
        memmove_0(&a2[v23], a2, v22);
        *(_QWORD *)(a1 + 8) = &a2[v23 + v22];
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v11 - v23), 8 * v7);
        *(_QWORD *)(a1 + 8) = v23 + v11;
        memmove_0(&a2[8 * v7], a2, v11 + -8LL * v7 - (_QWORD)a2);
      }
      memmove_0(a2, a3, v4);
    }
    else
    {
      v12 = (v11 - *(_QWORD *)a1) >> 3;
      if ( v7 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error(v10);
      v13 = v12 + v7;
      v14 = (__int64)&v10[-*(_QWORD *)a1] >> 3;
      v15 = v14 >> 1;
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v16 = v15 + v14;
        if ( v15 + v14 < v13 )
          v16 = v13;
      }
      else
      {
        v16 = v12 + v7;
      }
      v17 = 8 * v16;
      if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
        v17 = -1LL;
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v17);
      memmove_0(&v18[8 * v5], a3, v4);
      v19 = v18;
      v20 = *(char **)a1;
      if ( v24 )
      {
        v21 = *(_QWORD *)(a1 + 8) - (_QWORD)v20;
      }
      else
      {
        memmove_0(v18, v20, (size_t)&a2[-*(_QWORD *)a1]);
        v21 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v19 = &v18[8 * v5 + 8 * v7];
        v20 = a2;
      }
      memmove_0(v19, v20, v21);
      std::vector<CVectorShape *>::_Change_array((__int64 *)a1, (__int64)v18, v13, v16);
    }
  }
}
