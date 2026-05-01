/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_8317d86ccc4fc543e8e6132f798c706e__unsigned_short_ @ 0x180093E98
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180093F44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18006C390 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x18006C3D0 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x1800FA790 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 */

__int64 __fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_8317d86ccc4fc543e8e6132f798c706e__unsigned_short_(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _WORD *v9; // rdi
  unsigned __int64 i; // rcx
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::wstring::_Calculate_growth(a1, a2);
  v7 = std::allocator<unsigned short>::allocate(v6, v5 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v8 = v7;
  if ( a2 )
  {
    v9 = v7;
    for ( i = a2; i; --i )
      *v9++ = 0;
  }
  *((_WORD *)v7 + a2) = 0;
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v4 + 2));
  result = a1;
  *(_QWORD *)a1 = v8;
  return result;
}
