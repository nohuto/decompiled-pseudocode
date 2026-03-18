/*
 * XREFs of ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x180031090
 * Callers:
 *     AppendShaderBody @ 0x180032E4C (AppendShaderBody.c)
 *     DecodeInputTexcoord @ 0x1800330B8 (DecodeInputTexcoord.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18006F854 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::SwizzleNode(__int64 a1, __int16 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    a1 + 16,
    &v7,
    &v6);
  if ( v7 == *(_QWORD *)(a1 + 24) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x9Du, 0LL);
  }
  else
  {
    strcpy_s((char *)(v7 + 33), 5uLL, "xy");
    return 0;
  }
  return v4;
}
