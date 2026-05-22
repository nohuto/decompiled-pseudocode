/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@XZ @ 0x1800483D0
 * Callers:
 *     _MPCConstantManager::AddDeviceId_::_1_::dtor$0 @ 0x1801301A5 (_MPCConstantManager--AddDeviceId_--_1_--dtor$0.c)
 *     _std::_Callback_once_std::tuple__lambda_f8d27b8d936a7adc219ade59e2fa9c02__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$1 @ 0x180134E16 (_std--_Callback_once_std--tuple__lambda_f8d27b8d936a7adc219ade59e2fa9c02__--___ptr64_std--except.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float_______::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float________::_1_::dtor$0 @ 0x180134F6E (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 *     _std::_Callback_once_std::tuple__lambda_4a5cb4a35df262c8aa4f0fe492943826__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$6 @ 0x1801351C3 (_std--_Callback_once_std--tuple__lambda_4a5cb4a35df262c8aa4f0fe492943826__--___ptr6_ea_1801351C3.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x18004963C (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 */

void __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::~map<std::wstring,std::variant<unsigned long,bool,float>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x48);
}
