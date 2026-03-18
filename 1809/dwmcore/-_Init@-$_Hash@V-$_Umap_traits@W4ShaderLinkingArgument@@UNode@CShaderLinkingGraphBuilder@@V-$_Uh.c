/*
 * XREFs of ?_Init@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E36A0
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800DCEB0 (-_Check_size@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800E333C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800E3530 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 * Callees:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@Z @ 0x1800E3734 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBW4Sh.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800E38A8 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_sim_ea_1800E38A8.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Init(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 3;
  v4 = 2 * a2;
  if ( 2 * a2 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>::_Reallocate_exactly(
      a1 + 3,
      2 * a2);
  }
  v8 = a1[1];
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>::assign(
    v2,
    v4,
    &v8);
  result = a2 - 1;
  a1[6] = a2 - 1;
  a1[7] = a2;
  return result;
}
