/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x1801586FC
 * Callers:
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180158948 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18004CD1C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(
        char *Src,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  SIZE_T v7; // rcx
  void *v8; // rax
  void *v9; // rbp
  size_t v10; // r8
  void *v11; // rbx

  v2 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v2 < a2 )
    std::_Xlength_error(Src);
  v4 = *((_QWORD *)Src + 3);
  v5 = v2 + a2;
  v6 = std::wstring::_Calculate_growth((__int64)Src, v2 + a2);
  v7 = 2 * (v6 + 1);
  if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v7 = -1LL;
  v8 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  *((_QWORD *)Src + 2) = v5;
  v9 = v8;
  *((_QWORD *)Src + 3) = v6;
  v10 = 2 * v2 + 2;
  if ( v4 < 8 )
  {
    memcpy_0(v8, Src, v10);
  }
  else
  {
    v11 = *(void **)Src;
    memcpy_0(v8, *(const void **)Src, v10);
    std::_Deallocate<16,0>(v11, 2 * v4 + 2);
  }
  *(_QWORD *)Src = v9;
  return Src;
}
