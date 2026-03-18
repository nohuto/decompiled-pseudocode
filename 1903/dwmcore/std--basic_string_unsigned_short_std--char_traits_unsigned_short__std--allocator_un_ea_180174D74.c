/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_ @ 0x180174D74
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180175DE8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x180045B7C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_(
        char *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  __int64 v5; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  SIZE_T v11; // rcx
  char *v12; // rax
  size_t v13; // r8
  __int64 v14; // r15
  char *v15; // r14
  char *v16; // r12
  size_t v17; // rdi
  void *v18; // rbx

  v5 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::_Xlength_error(Src);
  v8 = *((_QWORD *)Src + 3);
  v9 = v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)Src, v5 + a2);
  v11 = 2 * (v10 + 1);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = 2 * v5;
  v14 = a5 + v5;
  *((_QWORD *)Src + 2) = v9;
  *((_QWORD *)Src + 3) = v10;
  v15 = v12;
  v16 = &v12[v13];
  v17 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v12, Src, v13);
    memcpy_0(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
  }
  else
  {
    v18 = *(void **)Src;
    memcpy_0(v12, *(const void **)Src, v13);
    memcpy_0(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
    std::_Deallocate<16,0>(v18, 2 * v8 + 2);
  }
  *(_QWORD *)Src = v15;
  return Src;
}
