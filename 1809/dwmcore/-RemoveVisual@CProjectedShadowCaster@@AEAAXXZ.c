/*
 * XREFs of ?RemoveVisual@CProjectedShadowCaster@@AEAAXXZ @ 0x1801ADF5C
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1801ACDAC (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801AE160 (-SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BFB4 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801AE68C (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

void __fastcall CProjectedShadowCaster::RemoveVisual(CProjectedShadowCaster *this)
{
  __int64 v2; // rcx
  __int64 *ProjectedShadowCasters; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rax
  CProjectedShadowCaster **v8; // rdx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    ProjectedShadowCasters = (__int64 *)CVisual::GetProjectedShadowCasters(v2);
    v4 = ProjectedShadowCasters[1];
    v5 = *ProjectedShadowCasters;
    v6 = ((v4 - *ProjectedShadowCasters) >> 3) - 1;
    if ( v6 >= 0 )
    {
      v7 = v6;
      v8 = (CProjectedShadowCaster **)(v5 + 8LL * v6);
      while ( *v8 != this )
      {
        --v6;
        --v8;
        if ( --v7 < 0 )
          goto LABEL_8;
      }
      memmove_0((void *)(v5 + 8LL * v6), (const void *)(v5 + 8LL * v6 + 8), v4 - (v5 + 8LL * v6 + 8));
      ProjectedShadowCasters[1] -= 8LL;
      v4 = ProjectedShadowCasters[1];
    }
LABEL_8:
    if ( ((v4 - *ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      CComposition::RemoveProjectedShadowCasterVisual(*((CComposition **)this + 2), *((struct CVisual **)this + 7));
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear((char *)this + 96);
    *((_QWORD *)this + 7) = 0LL;
  }
}
