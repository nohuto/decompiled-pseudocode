/*
 * XREFs of ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800312EC
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180097880 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$0 @ 0x1800C97B5 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800C97B5.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_std::_String_iterator_std::_String_val_std::_Simple_types_char________::_1_::catch$0 @ 0x1800C9966 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800C9966.c)
 *     _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$0 @ 0x1800CBEAE (_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Co_ea_1800CBEAE.c)
 * Callees:
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 */

void __fastcall std::wstring::_Tidy(void **a1, char a2, void *a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 8 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy_0(a1, *a1, 2LL * (_QWORD)a3);
    operator delete(v5);
  }
  a1[3] = (void *)7;
  a1[2] = a3;
  *((_WORD *)a1 + (_QWORD)a3) = 0;
}
