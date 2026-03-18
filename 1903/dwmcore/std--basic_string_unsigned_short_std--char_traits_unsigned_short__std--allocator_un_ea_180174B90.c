/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_156f8c05752017390d6185e99ef4c093__unsigned___int64_unsigned_short_const___unsigned___int64_ @ 0x180174B90
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1801764F4 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x180045B7C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_156f8c05752017390d6185e99ef4c093__unsigned___int64_unsigned_short_const___unsigned___int64_(
        char *Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rbx
  SIZE_T v11; // rcx
  char *v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // rdi
  void *v16; // rbx

  v6 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v6 < a2 )
    std::_Xlength_error(Src);
  v8 = *((_QWORD *)Src + 3);
  v9 = v6 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)Src, v6 + a2);
  v11 = 2 * (v10 + 1);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  *((_QWORD *)Src + 2) = v9;
  v13 = 2 * v6 + 2;
  *((_QWORD *)Src + 3) = v10;
  v14 = 2 * a6;
  v15 = &v12[2 * a6];
  if ( v8 < 8 )
  {
    memcpy_0(v12, L"image_", v14);
    memcpy_0(v15, Src, v13);
  }
  else
  {
    v16 = *(void **)Src;
    memcpy_0(v12, L"image_", v14);
    memcpy_0(v15, v16, v13);
    std::_Deallocate<16,0>(v16, 2 * v8 + 2);
  }
  *(_QWORD *)Src = v12;
  return Src;
}
