/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x18019A9AC
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18019EA64 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18005DB08 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator() @ 0x18019B570 (_lambda_b70241e9b5ebaad244db3e52d52cab17_--operator().c)
 */

_QWORD *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5)
{
  __int64 v5; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  void *v15; // rbx
  _QWORD *result; // rax

  v5 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::_Xlength_error("string too long");
  v8 = a1[3];
  v9 = v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)a1, v5 + a2);
  v11 = 2 * (v10 + 1);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  a1[2] = v9;
  v14 = v12;
  a1[3] = v10;
  if ( v8 < 8 )
  {
    lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v13, v12, a1, v5, a4, a5);
  }
  else
  {
    v15 = (void *)*a1;
    lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v13, v12, *a1, v5, a4, a5);
    std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)(2 * v8 + 2));
  }
  result = a1;
  *a1 = v14;
  return result;
}
