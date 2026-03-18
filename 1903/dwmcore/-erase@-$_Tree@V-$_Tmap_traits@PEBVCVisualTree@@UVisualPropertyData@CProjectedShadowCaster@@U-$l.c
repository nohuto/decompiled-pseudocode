/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x180006B28
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180088384 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x180006C00 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_180006C00.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // r11
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // r8
  unsigned __int64 v7; // r10
  __int64 *j; // rax
  __int64 v9; // rbx
  __int64 **v10; // rcx
  __int64 *v11; // rdx
  __int64 *i; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[4] )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a2 < v5[4] )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  j = v2;
  v9 = 0LL;
  while ( j != v4 )
  {
    v10 = (__int64 **)j[2];
    ++v9;
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v11 = *v10;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        j = v11;
    }
  }
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
    a1,
    &v14,
    v2,
    v4);
  return v9;
}
