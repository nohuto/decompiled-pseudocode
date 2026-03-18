/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18008B8A0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008BAC8 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180021890 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x180021A6C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180021AC8 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180021C60 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x1801ACC54 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x1801AE7BC (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_1801AE7BC.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r15
  struct CDrawListCacheSet::RenderTargetEntry **v4; // rbx
  CVisual *v5; // rdi
  unsigned int v6; // ebp
  __int64 *ProjectedShadowCasters; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 40);
  while ( 1 )
  {
    v2 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v3 = v2[2];
    v4 = (struct CDrawListCacheSet::RenderTargetEntry **)(v2 - 30);
    v5 = v4[3];
    if ( (**((_DWORD **)v5 + 28) & 0x20000) != 0 )
    {
      v6 = 0;
      ProjectedShadowCasters = (__int64 *)CVisual::GetProjectedShadowCasters(v4[3]);
      v8 = *ProjectedShadowCasters;
      if ( (ProjectedShadowCasters[1] - *ProjectedShadowCasters) >> 3 )
      {
        v12 = v3;
        v9 = 0LL;
        do
        {
          v10 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
                  *(_QWORD *)(v8 + 8 * v9) + 96LL,
                  &v12);
          if ( v10 == *(_QWORD *)(v11 + 96) || v3 < *(_QWORD *)(v10 + 32) )
            v10 = *(_QWORD *)(v11 + 96);
          if ( v10 != *(_QWORD *)(v11 + 96) )
            std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
              v11 + 96,
              &v12);
          v8 = *ProjectedShadowCasters;
          v9 = ++v6;
        }
        while ( v6 < (unsigned __int64)((ProjectedShadowCasters[1] - *ProjectedShadowCasters) >> 3) );
      }
    }
    CTreeData::Clear(v4);
    v4[32] = 0LL;
    if ( CVisual::GetUnusedTreeData(v5) )
      CVisualTreeData::`vector deleting destructor'((CVisualTreeData *)v4, 1);
    else
      CVisual::SetUnusedTreeData(v5, (struct CTreeData *)v4);
  }
}
