/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1801017F4
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180101C94 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x18010167C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18010167C.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::operator+<char>(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  __int64 result; // rax

  v4 = a2[2];
  v5 = a2;
  if ( (unsigned __int64)(a2[3] - v4) < 2 )
  {
    v5 = std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
           a2,
           2uLL,
           a3,
           ", ",
           2uLL);
  }
  else
  {
    v6 = a2[3] < 0x10uLL;
    a2[2] = v4 + 2;
    v7 = a2;
    if ( !v6 )
      v7 = (_QWORD *)*a2;
    v8 = (char *)v7 + v4;
    memmove_0((char *)v7 + v4, ", ", 2uLL);
    v8[2] = 0;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v5 + 1);
  v5[2] = 0LL;
  v5[3] = 15LL;
  *(_BYTE *)v5 = 0;
  return result;
}
