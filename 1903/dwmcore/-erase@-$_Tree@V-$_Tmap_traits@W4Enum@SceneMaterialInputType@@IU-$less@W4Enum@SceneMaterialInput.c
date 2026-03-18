/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@0@Z @ 0x1801F7AB8
 * Callers:
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1801F719C (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801F8258 (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801E0C7C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@@Z @ 0x1801F7810 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@s.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 v8; // r9
  __int64 *v9; // r8
  __int64 *i; // rax
  __int64 *v11; // rax
  __int64 j; // rcx
  __int64 *v13; // rax

  v5 = a3;
  if ( a3 == **a1 && a4 == (__int64 *)*a1 )
  {
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear(a1);
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v8 = v5[2];
      v9 = v5;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v5[2]);
      }
      v5 = i;
      v11 = v9;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( j = v9[1]; !*(_BYTE *)(j + 25) && v11 == *(__int64 **)(j + 16); j = *(_QWORD *)(j + 8) )
          v11 = (__int64 *)j;
      }
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Extract(
              a1,
              v9);
      std::_Deallocate<16,0>(v13, 0x28uLL);
    }
    *a2 = v5;
  }
  return a2;
}
