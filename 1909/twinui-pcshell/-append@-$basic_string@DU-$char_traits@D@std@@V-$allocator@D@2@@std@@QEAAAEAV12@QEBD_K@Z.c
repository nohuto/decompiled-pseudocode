/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800D2FFC
 * Callers:
 *     ?PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAE@Z @ 0x1800D2ACC (-PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x1800C6304 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 */

void **__fastcall std::string::append(void **Src, const void *a2, unsigned __int64 Size)
{
  _BYTE *v5; // rcx
  bool v6; // cf
  void *v7; // rax
  char *v8; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( Size > (_BYTE *)Src[3] - v5 )
    return std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_(
             Src,
             Size,
             Size,
             a2,
             Size);
  v6 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = &v5[Size];
  v7 = Src;
  if ( !v6 )
    v7 = *Src;
  v8 = &v5[(_QWORD)v7];
  memmove_0(&v5[(_QWORD)v7], a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
