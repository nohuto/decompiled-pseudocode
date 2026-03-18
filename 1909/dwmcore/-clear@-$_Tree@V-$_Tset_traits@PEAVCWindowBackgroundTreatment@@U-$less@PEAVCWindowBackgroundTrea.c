/*
 * XREFs of ?clear@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18004A1C0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@0@Z @ 0x180049CF8 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowB_ea_180049CF8.c)
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x18004A0E8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18004A204 (-_Erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTre.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::clear(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Erase(
    a1,
    *(_QWORD *)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v1;
  *(_QWORD *)*a1 = v1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v1;
  a1[1] = 0LL;
  return result;
}
