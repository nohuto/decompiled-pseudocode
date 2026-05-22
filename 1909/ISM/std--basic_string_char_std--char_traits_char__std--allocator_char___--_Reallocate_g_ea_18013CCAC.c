/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_ @ 0x18013CCAC
 * Callers:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x18013E86C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x18013E7B4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 */

void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  char *v6; // r15
  unsigned __int64 v8; // rbp
  char *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  char *v13; // rdi
  void *v14; // rbx
  void **result; // rax

  v6 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    std::_Xlength_error("string too long");
  v8 = (unsigned __int64)Src[3];
  v9 = &v6[a2];
  v10 = std::string::_Calculate_growth(Src, &v6[a2]);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  v12 = v11;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v13 = (char *)v11 + Size;
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, Src, (size_t)(v6 + 1));
  }
  else
  {
    v14 = *Src;
    memcpy_0(v11, Srca, Size);
    memcpy_0(v13, v14, (size_t)(v6 + 1));
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(v8 + 1));
  }
  result = Src;
  *Src = v12;
  return result;
}
