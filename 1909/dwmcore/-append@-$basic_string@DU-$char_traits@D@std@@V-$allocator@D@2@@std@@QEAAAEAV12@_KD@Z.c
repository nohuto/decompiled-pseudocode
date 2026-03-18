/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18017462C
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180174E70 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180173738 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180173738.c)
 */

char *__fastcall std::string::append(char *a1)
{
  __int64 v1; // rdx
  bool v2; // cf
  __int64 *v3; // rax

  v1 = *((_QWORD *)a1 + 2);
  if ( (unsigned __int64)(*((_QWORD *)a1 + 3) - v1) < 8 )
    return std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(a1);
  v2 = *((_QWORD *)a1 + 3) < 0x10uLL;
  *((_QWORD *)a1 + 2) = v1 + 8;
  v3 = (__int64 *)a1;
  if ( !v2 )
    v3 = *(__int64 **)a1;
  *(__int64 *)((char *)v3 + v1) = 0LL;
  *((_BYTE *)v3 + v1 + 8) = 0;
  return a1;
}
