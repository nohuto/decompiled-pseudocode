/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x180045AC4
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180045A60 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x180045B7C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  SIZE_T v9; // rcx
  _WORD *v10; // rax
  _WORD *v11; // rbp

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error(a1);
  v7 = *((_QWORD *)a1 + 3);
  v8 = std::wstring::_Calculate_growth();
  v9 = 2 * (v8 + 1);
  if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v9 = -1LL;
  v10 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  *((_QWORD *)a1 + 3) = v8;
  *((_QWORD *)a1 + 2) = a2;
  v11 = v10;
  memcpy_0(v10, a4, 2 * a2);
  v11[a2] = 0;
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}
