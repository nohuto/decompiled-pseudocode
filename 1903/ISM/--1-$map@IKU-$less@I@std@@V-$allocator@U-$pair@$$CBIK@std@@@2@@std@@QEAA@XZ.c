/*
 * XREFs of ??1?$map@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@@std@@QEAA@XZ @ 0x1800957A0
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$4 @ 0x18009573D (_SpectrumListener--SpectrumListener_--_1_--dtor$4.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18009642C (-clear@-$_Tree@V-$_Tmap_traits@IKU-$less@I@std@@V-$allocator@U-$pair@$$CBIK@std@@@2@$0A@@std@@@s.c)
 */

void __fastcall std::map<unsigned int,unsigned long>::~map<unsigned int,unsigned long>(void **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
