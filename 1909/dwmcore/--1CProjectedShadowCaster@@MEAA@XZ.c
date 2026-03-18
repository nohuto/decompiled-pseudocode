/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180003850
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x180003810 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x18000406C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x180005360 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_180005360.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(struct CResource **this)
{
  struct CResource *v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  *this = (struct CResource *)&CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::SetCastingVisual((CProjectedShadowCaster *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  v2 = this[11];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[13] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[11] = 0LL;
    this[12] = 0LL;
    this[13] = 0LL;
  }
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
    this + 9,
    &v3,
    *(_QWORD *)this[9],
    this[9]);
  std::_Deallocate<16,0>(this[9], 88LL);
  CResource::~CResource((CResource *)this);
}
