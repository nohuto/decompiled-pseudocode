/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18016F994
 * Callers:
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x180093D9C (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18016D330 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x18016C04C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18016C04C.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  _QWORD *v7; // r9
  _WORD *v8; // rdi
  unsigned __int64 i; // rcx
  __int16 v11; // [rsp+20h] [rbp-18h]

  v4 = a1[2];
  if ( a2 > a1[3] - v4 )
  {
    v11 = a3;
    LOBYTE(a3) = 0;
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
             a1,
             a2,
             a3,
             a2,
             v11);
  }
  else
  {
    v5 = a1[3] < 8uLL;
    v6 = v4 + a2;
    a1[2] = v4 + a2;
    v7 = a1;
    if ( !v5 )
      v7 = (_QWORD *)*a1;
    v8 = (_WORD *)v7 + v4;
    if ( a2 )
    {
      for ( i = a2; i; --i )
        *v8++ = a3;
    }
    *((_WORD *)v7 + v6) = 0;
    return a1;
  }
}
