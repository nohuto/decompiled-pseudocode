/*
 * XREFs of ??$emplace_front@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x18003423C
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x180033F30 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x180030028 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?_Incsize@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAX_K@Z @ 0x180034394 (-_Incsize@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-.c)
 */

__int64 __fastcall std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::emplace_front<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
        _QWORD **a1,
        __int16 *a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  __int16 v7; // r8
  _QWORD *v8; // rdi
  _WORD *v9; // rbx

  v4 = (_QWORD *)**a1;
  v5 = (_QWORD *)v4[1];
  v6 = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
         (__int64)a1,
         v4,
         v5);
  v7 = *a2;
  v8 = v6;
  v9 = a2 + 4;
  *((_WORD *)v6 + 8) = v7;
  v6[3] = 0LL;
  if ( v6 + 3 != (_QWORD *)v9 )
  {
    v6[3] = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
  }
  *((_BYTE *)v6 + 32) = *((_BYTE *)v9 + 8);
  *(_DWORD *)((char *)v6 + 33) = *(_DWORD *)((char *)v9 + 9);
  *((_BYTE *)v6 + 37) = *((_BYTE *)v9 + 13);
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Incsize(a1);
  v4[1] = v8;
  *v5 = v8;
  return **a1 + 16LL;
}
