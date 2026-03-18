/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_ @ 0x180173800
 * Callers:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x180174CAC (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C7C30 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_(
        char *Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  __int64 v6; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // r14
  char *v13; // rdi
  void *v14; // rbx

  v6 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFFLL - v6 < a2 )
    std::_Xlength_error(Src);
  v8 = *((_QWORD *)Src + 3);
  v9 = v6 + a2;
  v10 = std::string::_Calculate_growth((__int64)Src, v6 + a2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  v12 = v11;
  *((_QWORD *)Src + 2) = v9;
  *((_QWORD *)Src + 3) = v10;
  v13 = &v11[Size];
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, Src, v6 + 1);
  }
  else
  {
    v14 = *(void **)Src;
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, v14, v6 + 1);
    std::_Deallocate<16,0>(v14, v8 + 1);
  }
  *(_QWORD *)Src = v12;
  return Src;
}
