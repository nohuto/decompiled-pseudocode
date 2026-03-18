/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x180174CAC
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x180172418 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_ @ 0x180173800 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180173800.c)
 */

char *__fastcall std::string::insert(char *a1, __int64 a2, char *a3, unsigned __int64 Size)
{
  __int64 v5; // r8
  bool v8; // cf
  char *v9; // rbx
  size_t v10; // rsi

  v5 = *((_QWORD *)a1 + 2);
  if ( Size > *((_QWORD *)a1 + 3) - v5 )
    return std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_(
             a1,
             Size,
             v5,
             Size,
             a3,
             Size);
  v8 = *((_QWORD *)a1 + 3) < 0x10uLL;
  *((_QWORD *)a1 + 2) = v5 + Size;
  v9 = a1;
  if ( !v8 )
    v9 = *(char **)a1;
  if ( &a3[Size] <= v9 || a3 > &v9[v5] )
  {
    v10 = Size;
  }
  else if ( v9 > a3 )
  {
    v10 = v9 - a3;
  }
  else
  {
    v10 = 0LL;
  }
  memmove_0(&v9[Size], v9, v5 + 1);
  memcpy_0(v9, a3, v10);
  memcpy_0(&v9[v10], &a3[v10 + Size], Size - v10);
  return a1;
}
