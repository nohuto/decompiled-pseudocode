/*
 * XREFs of ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x18006C3D0
 * Callers:
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18008C1EC (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_8317d86ccc4fc543e8e6132f798c706e__unsigned_short_ @ 0x180093E98 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180093E98.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::allocator<unsigned short>::allocate(__int64 a1, unsigned __int64 a2)
{
  size_t v2; // rcx

  v2 = 2 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
