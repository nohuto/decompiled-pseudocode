/*
 * XREFs of ??1?$map@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@@std@@QEAA@XZ @ 0x180256E8C
 * Callers:
 *     _WindowingEnvironmentConfig::WindowingEnvironmentConfig_::_1_::dtor$3 @ 0x180256E5E (_WindowingEnvironmentConfig--WindowingEnvironmentConfig_--_1_--dtor$3.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@0@Z @ 0x180258DAC (-erase@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDi.c)
 */

void __fastcall std::map<unsigned long,DisplayRegionInfo>::~map<unsigned long,DisplayRegionInfo>(void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x40);
}
