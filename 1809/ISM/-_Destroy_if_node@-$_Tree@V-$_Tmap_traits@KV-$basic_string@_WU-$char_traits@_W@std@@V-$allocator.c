/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@Z @ 0x180129E2C
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1@Z @ 0x180129E58 (--$_Insert_at@AEAU-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Insert_nohint_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______void_____ptr64______ptr64__::_1_::catch$1 @ 0x180136A0E (_std--_Tree_std--_Tmap_traits_unsigned_long_std--basic_string_wchar_t_std--char_traits_wchar_t__.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  std::wstring::~wstring((__int64)a2 + 40);
  operator delete(a2, (const struct std::nothrow_t *)0x48);
}
