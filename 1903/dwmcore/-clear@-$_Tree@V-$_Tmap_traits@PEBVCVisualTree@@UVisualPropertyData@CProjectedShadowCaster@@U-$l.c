/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800068F4
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180003F80 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x180006C00 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_180006C00.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@@Z @ 0x180006938 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Erase(
    a1,
    *(_QWORD *)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v1;
  *(_QWORD *)*a1 = v1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v1;
  a1[1] = 0LL;
  return result;
}
