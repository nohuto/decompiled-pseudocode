/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1801BD954
 * Callers:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800BE534 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801BABC0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x1801B98FC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1801B98FC.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  _QWORD *v7; // r9
  __int16 *v8; // rdi
  unsigned __int64 i; // rcx

  v4 = a1[2];
  if ( a2 > a1[3] - v4 )
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
             a1,
             a2,
             0LL,
             a2,
             a3);
  v5 = a1[3] < 8uLL;
  v6 = v4 + a2;
  a1[2] = v4 + a2;
  v7 = a1;
  if ( !v5 )
    v7 = (_QWORD *)*a1;
  v8 = (__int16 *)v7 + v4;
  if ( a2 )
  {
    for ( i = a2; i; --i )
      *v8++ = a3;
  }
  *((_WORD *)v7 + v6) = 0;
  return a1;
}
