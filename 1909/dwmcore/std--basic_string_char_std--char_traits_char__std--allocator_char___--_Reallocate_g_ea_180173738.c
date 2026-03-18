/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180173738
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18017462C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C7C30 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(
        char *Src)
{
  size_t v1; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  void *v7; // rbx

  v1 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFFLL - v1 < 8 )
    std::_Xlength_error(Src);
  v3 = *((_QWORD *)Src + 3);
  v4 = std::string::_Calculate_growth((__int64)Src, v1 + 8);
  v5 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v4 + 1);
  *((_QWORD *)Src + 2) = v1 + 8;
  v6 = v5;
  *((_QWORD *)Src + 3) = v4;
  if ( v3 < 0x10 )
  {
    memcpy_0(v5, Src, v1);
    *(_QWORD *)&v6[v1] = 0LL;
    v6[v1 + 8] = 0;
  }
  else
  {
    v7 = *(void **)Src;
    memcpy_0(v5, *(const void **)Src, v1);
    *(_QWORD *)&v6[v1] = 0LL;
    v6[v1 + 8] = 0;
    std::_Deallocate<16,0>(v7, v3 + 1);
  }
  *(_QWORD *)Src = v6;
  return Src;
}
