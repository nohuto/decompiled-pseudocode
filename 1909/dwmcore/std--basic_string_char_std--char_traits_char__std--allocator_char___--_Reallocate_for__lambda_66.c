/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const___ @ 0x18016A3E8
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016A700 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C7C30 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const___(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = std::string::_Calculate_growth(a1, a2);
  v9 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v8;
  v10 = v9;
  memcpy_0(v9, a4, a2);
  v10[a2] = 0;
  if ( v7 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v7 + 1);
  *(_QWORD *)a1 = v10;
  return a1;
}
