/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x1801AE6C8
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1801ACDAC (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x1801AE7BC (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_1801AE7BC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@2@@Z @ 0x180155C50 (-_Extract@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801AE68C (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  char *v8; // rdx
  __int64 v9; // r8
  char v10; // r9
  __int64 v11; // rcx
  _QWORD *i; // rax
  __int64 v13; // rax
  __int64 j; // rcx
  _QWORD *v15; // rax

  v5 = a3;
  if ( a3 == *(_QWORD **)*a1 && a4 == (_QWORD *)*a1 )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(a1);
    *a2 = *(_QWORD *)*a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v8 = (char *)v5 + 25;
      v9 = (__int64)v5;
      v10 = *((_BYTE *)v5 + 25);
      if ( !v10 )
      {
        v11 = v5[2];
        if ( *(_BYTE *)(v11 + 25) )
        {
          for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v5 = i;
          v10 = *v8;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v11);
        }
        v5 = i;
      }
      v13 = v9;
      if ( !v10 && *(_BYTE *)(*(_QWORD *)(v9 + 16) + 25LL) )
      {
        for ( j = *(_QWORD *)(v9 + 8); !*(_BYTE *)(j + 25) && v13 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v13 = j;
      }
      v15 = std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Extract(
              a1,
              v9);
      std::_Deallocate<16,0>(v15, 0x40uLL);
    }
    *a2 = v5;
  }
  return a2;
}
