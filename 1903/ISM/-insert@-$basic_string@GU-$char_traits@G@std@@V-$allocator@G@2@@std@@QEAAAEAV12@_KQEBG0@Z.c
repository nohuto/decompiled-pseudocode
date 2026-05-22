/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008BB0C
 * Callers:
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180089DF8 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_156f8c05752017390d6185e99ef4c093__unsigned___int64_unsigned_short_const___unsigned___int64_ @ 0x180088498 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180088498.c)
 */

void **__fastcall std::wstring::insert(void **a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  bool v7; // cf
  char *v8; // r14
  __int64 v9; // rdi
  int v11; // [rsp+20h] [rbp-28h]

  v4 = (__int64)a1[2];
  if ( (char *)a4 > (char *)a1[3] - v4 )
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_156f8c05752017390d6185e99ef4c093__unsigned___int64_unsigned_short_const___unsigned___int64_(
             a1,
             a4,
             v4,
             a4,
             v11,
             a4);
  v7 = (unsigned __int64)a1[3] < 8;
  a1[2] = (void *)(v4 + a4);
  v8 = (char *)a1;
  if ( !v7 )
    v8 = (char *)*a1;
  if ( &asc_180185024[a4] <= (wchar_t *)v8 || L"," > (wchar_t *)&v8[2 * v4] )
  {
    v9 = a4;
  }
  else if ( v8 > (char *)L"," )
  {
    v9 = (v8 - (char *)L",") >> 1;
  }
  else
  {
    v9 = 0LL;
  }
  memmove_0(&v8[2 * a4], v8, 2 * v4 + 2);
  memcpy_0(v8, L",", 2 * v9);
  memcpy_0(&v8[2 * v9], &asc_180185024[v9 + a4], 2 * (a4 - v9));
  return a1;
}
