/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1801377D8
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Ucopy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__::_1_::dtor$1 @ 0x18008B77A (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_18008B77A.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::wstring *>::~_Uninitialized_backout_al<std::wstring *,std::allocator<std::wstring>>(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  for ( i = *(_QWORD **)a1; i != v1; i += 4 )
    result = std::wstring::_Tidy_deallocate(i);
  return result;
}
