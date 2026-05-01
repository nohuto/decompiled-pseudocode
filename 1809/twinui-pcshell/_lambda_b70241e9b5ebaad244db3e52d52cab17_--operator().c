/*
 * XREFs of _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator() @ 0x18016CBC4
 * Callers:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x18016C04C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18016C04C.c)
 * Callees:
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 */

__int64 __fastcall lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6)
{
  __int64 v6; // rdi
  char *v9; // rdi
  __int64 i; // rcx
  __int64 result; // rax

  v6 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  v9 = &a2[v6];
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      *(_WORD *)v9 = a6;
      v9 += 2;
    }
  }
  result = a4 + a5;
  *(_WORD *)&a2[2 * a4 + 2 * a5] = 0;
  return result;
}
