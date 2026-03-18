/*
 * XREFs of ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x1801F595C
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801F6074 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@XZ @ 0x18003DB0C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Sce.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5648 (--$_Insert_hint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$.c)
 */

__int64 __fastcall std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r8d
  _QWORD *v9; // rax
  int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      if ( *(_DWORD *)(v7 + 28) >= v8 )
      {
        v6 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( v6 == *a1 || *a3 < *(_DWORD *)(v6 + 28) )
  {
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Buynode0(a1);
    *((_WORD *)v9 + 12) = 0;
    v10 = *a3;
    *((_DWORD *)v9 + 8) = 0;
    *((_DWORD *)v9 + 7) = v10;
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_hint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
      a1,
      &v12,
      v6,
      (int *)v9 + 7,
      v9);
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
