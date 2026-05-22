/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@XZ @ 0x180088AC0
 * Callers:
 *     __lambda_c0c3d577aad3ca08d159cb5956f28f0e_::operator()_::_1_::dtor$9 @ 0x18003D82D (__lambda_c0c3d577aad3ca08d159cb5956f28f0e_--operator()_--_1_--dtor$9.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float_______::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::variant_unsigned_long_bool_float__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::variant_unsigned_long_bool_float________::_1_::dtor$0 @ 0x18003D87B (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 *     _MPCConstantManager::AddInputType_::_1_::dtor$0 @ 0x180088F3B (_MPCConstantManager--AddInputType_--_1_--dtor$0.c)
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$1 @ 0x180089468 (_MPCConstantManager--ChangeConstant_--_1_--dtor$1.c)
 *     __lambda_7a8cdf47427de701aad174af942599f3_::operator()_::_1_::dtor$2 @ 0x18012BF66 (__lambda_7a8cdf47427de701aad174af942599f3_--operator()_--_1_--dtor$2.c)
 *     __lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator()_::_1_::dtor$53 @ 0x18012FAC4 (__lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator()_--_1_--dtor$53.c)
 *     __lambda_cea5e010cd57342e421c8488c8b753a5_::operator()_::_1_::dtor$30 @ 0x180134660 (__lambda_cea5e010cd57342e421c8488c8b753a5_--operator()_--_1_--dtor$30.c)
 *     __lambda_c78139b4692b055c43ac45a1104373ed_::operator()_::_1_::dtor$8 @ 0x180137149 (__lambda_c78139b4692b055c43ac45a1104373ed_--operator()_--_1_--dtor$8.c)
 *     __lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator()_::_1_::dtor$5 @ 0x18013F95E (__lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x180025928 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 */

void __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::~map<std::wstring,std::variant<unsigned long,bool,float>>(
        void **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
    (_QWORD **)a1,
    &v2,
    *(_QWORD **)*a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x48);
}
