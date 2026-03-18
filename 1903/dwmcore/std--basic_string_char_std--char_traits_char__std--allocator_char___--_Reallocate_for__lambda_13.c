/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180176A84
 * Callers:
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x1801769C4 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C79D0 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  _BYTE *v6; // rax
  _BYTE *v7; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::string::_Calculate_growth(a1, a2);
  v6 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v7 = v6;
  memset_0(v6, 0, a2);
  v7[a2] = 0;
  if ( v4 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v4 + 1);
  *(_QWORD *)a1 = v7;
  return a1;
}
