/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x1800276AC
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x180015A3C (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180027708 (-_Init@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@PEAX@2@PEAU32@0@Z @ 0x180029170 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVInputInfoValidator@@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,InputInfoValidator *>>>::_Buynode0(a1);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::_Init(a1);
  return a1;
}
