/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180175D24
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x1801765E0 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 * Callees:
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x180174C8C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180174C8C.c)
 */

char *__fastcall std::string::append(char *Src, const void *a2, unsigned __int64 Size)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  char *result; // rax

  v5 = *((_QWORD *)Src + 2);
  if ( Size > *((_QWORD *)Src + 3) - v5 )
    return std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_(
             Src,
             Size,
             Size,
             a2,
             Size);
  v6 = *((_QWORD *)Src + 3) < 0x10uLL;
  *((_QWORD *)Src + 2) = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = *(_QWORD **)Src;
  v8 = (char *)v7 + v5;
  memmove_0((char *)v7 + v5, a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
