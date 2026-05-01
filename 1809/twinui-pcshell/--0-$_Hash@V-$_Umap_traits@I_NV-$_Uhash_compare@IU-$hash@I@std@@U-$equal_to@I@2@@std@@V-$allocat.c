/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBI_N@std@@@1@@Z @ 0x1802C0418
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1802C0640 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801965DC (-_Init@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$all.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBI_N@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBI_N@std@@PEAX@2@PEAU32@0@Z @ 0x1802C9204 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBI_N@std@@V-$allocator@U-$pair@$$CBI_N@s.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>(
        _QWORD *a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,bool>>>::_Buynode0(a1);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Init(
    a1,
    8LL);
  return a1;
}
