/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x18013CBBC
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18013E7F4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x18013E7B4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 */

void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  unsigned __int64 v8; // r13
  size_t v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r15
  char *v12; // rdi
  void *v13; // rbx
  void **result; // rax

  v5 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlength_error("string too long");
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v10 = std::string::_Calculate_growth(Src, v5 + a2);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  Src[2] = (void *)v9;
  Src[3] = (void *)v10;
  v12 = (char *)v11 + v5;
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v11, *Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(v8 + 1));
  }
  result = Src;
  *Src = v11;
  return result;
}
