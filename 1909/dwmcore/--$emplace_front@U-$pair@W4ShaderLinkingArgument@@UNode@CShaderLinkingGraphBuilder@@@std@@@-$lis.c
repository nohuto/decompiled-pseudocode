/*
 * XREFs of ??$emplace_front@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800324D8
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800321CC (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x180032748 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?_Incsize@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAX_K@Z @ 0x180032788 (-_Incsize@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-.c)
 */

__int64 __fastcall std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::emplace_front<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
        __int64 **a1,
        __int16 *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int16 v7; // r8
  __int64 v8; // rdi
  _WORD *v9; // rbx

  v4 = **a1;
  v5 = *(__int64 **)(v4 + 8);
  v6 = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
         a1,
         v4,
         v5);
  v7 = *a2;
  v8 = v6;
  v9 = a2 + 4;
  *(_WORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 24) = 0LL;
  if ( (_WORD *)(v6 + 24) != v9 )
  {
    *(_QWORD *)(v6 + 24) = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
  }
  *(_BYTE *)(v6 + 32) = *((_BYTE *)v9 + 8);
  *(_DWORD *)(v6 + 33) = *(_DWORD *)((char *)v9 + 9);
  *(_BYTE *)(v6 + 37) = *((_BYTE *)v9 + 13);
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Incsize(a1);
  *(_QWORD *)(v4 + 8) = v8;
  *v5 = v8;
  return **a1 + 16;
}
