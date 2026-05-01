/*
 * XREFs of ?deallocate@?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x1800FF5E4
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$32 @ 0x1800A5C64 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1800A5C64.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Emplace_reallocate_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::catch$22 @ 0x1800A7029 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1800A7029.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::wstring>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(32 * a3));
}
