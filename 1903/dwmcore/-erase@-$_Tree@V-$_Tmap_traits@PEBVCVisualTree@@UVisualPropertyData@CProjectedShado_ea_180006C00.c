/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x180006C00
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180003870 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x180006B28 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800068F4 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@@Z @ 0x180006CFC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjec.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *j; // rbx
  __int64 **v8; // r8
  __int64 *v9; // rdx
  char v10; // r9
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *m; // rcx
  __int64 v14; // rsi
  __int64 *i; // rax
  __int64 *k; // rcx

  j = a3;
  if ( a3 == **a1 && a4 == (__int64 *)*a1 )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(a1);
    *a2 = **a1;
  }
  else
  {
    while ( j != a4 )
    {
      v8 = (__int64 **)j[2];
      v9 = j;
      v10 = *((_BYTE *)v8 + 25);
      if ( v10 )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v8;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
      v12 = v9;
      if ( v10 )
      {
        for ( k = (__int64 *)v9[1]; !*((_BYTE *)k + 25) && v12 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v12 = k;
      }
      else
      {
        for ( m = *v8; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          ;
      }
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(a1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v14 + 80);
      std::_Deallocate<16,0>(v14, 88LL);
    }
    *a2 = j;
  }
  return a2;
}
