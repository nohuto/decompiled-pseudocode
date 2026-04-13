/*
 * XREFs of ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180013948
 * Callers:
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$0 @ 0x1800CC7CA (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$0.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Construct_std::_String_iterator_std::_String_val_std::_Simple_types_wchar_t________::_1_::catch$0 @ 0x1800CF03C (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Construct_std--_String_i.c)
 * Callees:
 *     memcpy_0 @ 0x1800CB058 (memcpy_0.c)
 */

void __fastcall std::string::_Tidy(void **a1, char a2, size_t a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 0x10 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy_0(a1, *a1, a3);
    operator delete(v5);
  }
  a1[3] = (void *)15;
  a1[2] = (void *)a3;
  *((_BYTE *)a1 + a3) = 0;
}
