/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x18017353C
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1801745B4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C7C30 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_(
        char *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  unsigned __int64 v8; // r13
  size_t v9; // rdi
  __int64 v10; // rbx
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v5 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlength_error(Src);
  v8 = *((_QWORD *)Src + 3);
  v9 = v5 + a2;
  v10 = std::string::_Calculate_growth((__int64)Src, v5 + a2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  *((_QWORD *)Src + 2) = v9;
  *((_QWORD *)Src + 3) = v10;
  v12 = &v11[v5];
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
  }
  else
  {
    v13 = *(void **)Src;
    memcpy_0(v11, *(const void **)Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
    std::_Deallocate<16,0>(v13, v8 + 1);
  }
  *(_QWORD *)Src = v11;
  return Src;
}
