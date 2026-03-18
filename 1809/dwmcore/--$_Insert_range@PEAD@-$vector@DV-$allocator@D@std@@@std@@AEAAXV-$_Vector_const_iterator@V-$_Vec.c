/*
 * XREFs of ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800DF118
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800DEDB0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800DEE14 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<char>::_Insert_range<char *>(__int64 a1, _BYTE *a2, const void *a3, __int64 a4)
{
  char *v4; // r15
  size_t v5; // rsi
  char v6; // bp
  __int64 v10; // rdi
  size_t v11; // r15
  char *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  char *v16; // r15
  char *v17; // rdi
  const void *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]

  v4 = &a2[-*(_QWORD *)a1];
  v5 = a4 - (_QWORD)a3;
  v6 = 1;
  if ( a4 - (_QWORD)a3 == 1 && a2 == *(_BYTE **)(a1 + 8) || (v6 = 0, v5) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v5 > *(_QWORD *)(a1 + 16) - v10 )
    {
      v13 = v10 - *(_QWORD *)a1;
      if ( v5 > 0x7FFFFFFFFFFFFFFFLL - v13 )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v14 = v13 + v5;
      v22 = std::vector<char>::_Calculate_growth((_QWORD *)a1, v13 + v5);
      v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v22);
      v16 = &v4[v15];
      v17 = (char *)v15;
      memmove_0(v16, a3, v5);
      v18 = *(const void **)a1;
      v19 = v17;
      if ( v6 )
      {
        v20 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      }
      else
      {
        memmove_0(v17, v18, a2 - (_BYTE *)v18);
        v19 = &v16[v5];
        v20 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v18 = a2;
      }
      memmove_0(v19, v18, v20);
      std::vector<unsigned char>::_Change_array(a1, (__int64)v17, v14, v22);
    }
    else
    {
      v11 = v10 - (_QWORD)a2;
      if ( v5 < v10 - (__int64)a2 )
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v10 - v5), a4 - (_QWORD)a3);
        *(_QWORD *)(a1 + 8) = v5 + v10;
        memmove_0((void *)(v10 - (v11 - v5)), a2, v11 - v5);
      }
      else
      {
        v12 = &a2[v5];
        memmove_0(&a2[v5], a2, v11);
        *(_QWORD *)(a1 + 8) = &v12[v11];
      }
      memmove_0(a2, a3, v5);
    }
  }
}
