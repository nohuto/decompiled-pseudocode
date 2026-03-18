/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800D0178
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033794 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 *v8; // r9
  __int64 v9; // r10
  __int64 *i; // rax
  __int64 *v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 2 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 2 >= a3 ? 2 : 0) );
  }
  v7 = a1[3];
  v8 = (__int64 *)a1[1];
  v9 = 2 * (v4 & a1[6]);
  for ( i = *(__int64 **)(v7 + 16 * (v4 & a1[6])); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v7 + 8 * v9) == v8 ? (__int64 *)a1[1] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( *((_WORD *)i + 8) == *(_WORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
