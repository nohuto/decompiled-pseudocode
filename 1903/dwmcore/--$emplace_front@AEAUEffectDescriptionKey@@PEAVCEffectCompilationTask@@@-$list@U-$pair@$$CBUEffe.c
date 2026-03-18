/*
 * XREFs of ??$emplace_front@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18002FF88
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18002F928 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x180030028 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::emplace_front<EffectDescriptionKey &,CEffectCompilationTask *>(
        __int64 **a1,
        _OWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // r8
  __int64 *v9; // rax

  v6 = **a1;
  v7 = *(__int64 **)(v6 + 8);
  v8 = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
         a1,
         v6,
         v7);
  *(_OWORD *)(v8 + 16) = *a2;
  *(_QWORD *)(v8 + 32) = *a3;
  v9 = a1[1];
  if ( v9 == (__int64 *)0x666666666666665LL )
    std::_Xlength_error(0LL);
  a1[1] = (__int64 *)((char *)v9 + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
