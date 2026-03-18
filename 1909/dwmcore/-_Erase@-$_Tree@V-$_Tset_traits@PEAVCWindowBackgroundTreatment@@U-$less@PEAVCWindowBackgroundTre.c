/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18004A204
 * Callers:
 *     ?clear@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18004A1C0 (-clear@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTrea.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18004A204 (-_Erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTre.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18004A204 (-_Erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTre.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Erase(
      a1,
      i[2]);
    i = (__int64 *)*i;
    result = std::_Deallocate<16,0>(v2, 40LL);
  }
  return result;
}
