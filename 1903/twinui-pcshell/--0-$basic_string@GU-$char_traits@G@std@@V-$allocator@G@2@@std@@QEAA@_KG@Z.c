/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18031D5C4
 * Callers:
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x1800AF694 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800AFBAC (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x18031C160 (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_8317d86ccc4fc543e8e6132f798c706e__unsigned_short_ @ 0x18031C774 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18031C774.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, unsigned __int64 a2)
{
  _WORD *v3; // r8
  _WORD *v4; // rdi
  unsigned __int64 i; // rcx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( a2 > *(_QWORD *)(a1 + 24) )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_8317d86ccc4fc543e8e6132f798c706e__unsigned_short_(
      a1,
      a2);
  }
  else
  {
    v3 = (_WORD *)a1;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v3 = *(_WORD **)a1;
    *(_QWORD *)(a1 + 16) = a2;
    if ( a2 )
    {
      v4 = v3;
      for ( i = a2; i; --i )
        *v4++ = 0;
    }
    v3[a2] = 0;
  }
  return a1;
}
