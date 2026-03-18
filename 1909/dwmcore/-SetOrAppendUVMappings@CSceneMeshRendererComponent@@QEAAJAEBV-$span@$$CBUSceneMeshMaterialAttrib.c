/*
 * XREFs of ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801F6074
 * Callers:
 *     ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x1801F5F04 (-ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801DF55C (-clear@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 *     ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x1801F595C (--$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@-$map@W4Enum@SceneMaterialInputType@@IU-$l.c)
 *     ??C?$span_iterator@V?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x1801F5B38 (--C-$span_iterator@V-$span@$$CBUSceneMeshMaterialAttributeData@@$0-0@gsl@@$0A@@details@gsl@@QEBA.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetOrAppendUVMappings(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::clear((_QWORD *)(a1 + 88));
  v5 = *a2;
  v6 = 0LL;
  v10[0] = a2;
  while ( 1 )
  {
    v10[1] = v6;
    if ( v6 == v5 )
      break;
    v12 = *(_DWORD *)gsl::details::span_iterator<gsl::span<SceneMeshMaterialAttributeData const,-1>,0>::operator->(v10);
    std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
      (__int64 *)(a1 + 88),
      (__int64)v11,
      &v12);
    v8 = *(unsigned int *)(gsl::details::span_iterator<gsl::span<SceneMeshMaterialAttributeData const,-1>,0>::operator->(v10)
                         + 4);
    *(_DWORD *)(v11[0] + 32LL) = v8;
    if ( v6 < 0 || (v5 = *a2, v6 == *a2) )
    {
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v8, v7);
      __debugbreak();
    }
    ++v6;
  }
  result = 0LL;
  *(_BYTE *)(a1 + 104) = 1;
  return result;
}
