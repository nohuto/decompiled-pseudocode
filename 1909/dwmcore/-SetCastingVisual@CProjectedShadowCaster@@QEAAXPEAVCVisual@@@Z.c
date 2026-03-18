/*
 * XREFs of ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x18000406C
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180003850 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z @ 0x180003F0C (-ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 * Callees:
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180003F60 (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180004010 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000500C (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180005058 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18017660C (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowCaster *this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 ProjectedShadowCasters; // r14
  CProjectedShadowCaster **v9; // r8
  CProjectedShadowCaster **i; // rcx

  if ( a2 != *((struct CVisual **)this + 7) )
  {
    if ( *((_QWORD *)this + 7) )
    {
      CProjectedShadowCaster::InvalidateMaskContent(this);
      v4 = (CProjectedShadowScene **)*((_QWORD *)this + 11);
      v5 = 0LL;
      v6 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v4 + 7LL) >> 3;
      if ( (unsigned __int64)v4 > *((_QWORD *)this + 12) )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          CProjectedShadowScene::DiscardCachesForCaster(*v4, this);
          ++v5;
          ++v4;
        }
        while ( v5 != v6 );
      }
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear((char *)this + 72);
      v7 = *((_QWORD *)this + 7);
      if ( (**(_DWORD **)(v7 + 224) & 0x20000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(*((_QWORD *)this + 7));
        v9 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
        for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v9 && *i != this; ++i )
          ;
        if ( i != v9 )
        {
          memmove_0(i, i + 1, (char *)v9 - (char *)(i + 1));
          *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
          if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            CComposition::RemoveProjectedShadowCasterVisual(*(CComposition **)(v7 + 16), (struct CVisual *)v7);
        }
      }
    }
    *((_QWORD *)this + 7) = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster(a2, this);
      CProjectedShadowCaster::InvalidateMaskContent(this);
    }
  }
}
