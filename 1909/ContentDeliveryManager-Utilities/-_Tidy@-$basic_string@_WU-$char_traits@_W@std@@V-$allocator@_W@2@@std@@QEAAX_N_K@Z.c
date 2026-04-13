/*
 * XREFs of ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800321C0
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180086790 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009B43C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$0 @ 0x1800CD9A2 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800CD9A2.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_std::_String_iterator_std::_String_val_std::_Simple_types_char________::_1_::catch$0 @ 0x1800CDBA0 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800CDBA0.c)
 *     _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$0 @ 0x1800D007C (_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Co_ea_1800D007C.c)
 * Callees:
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
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
