/*
 * XREFs of ??$emplace_front@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800C651C
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800C5EE8 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x180032748 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::emplace_front<EffectDescriptionKey &,CEffectCompilationTask *>(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbp
  _QWORD *v7; // r14
  _QWORD *v8; // r8
  __int64 v9; // rax

  v6 = **(_QWORD ***)a1;
  v7 = (_QWORD *)v6[1];
  v8 = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
         a1,
         v6,
         v7);
  *((_OWORD *)v8 + 1) = *a2;
  v8[4] = *a3;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x666666666666665LL )
    std::_Xlength_error(0LL);
  *(_QWORD *)(a1 + 8) = v9 + 1;
  v6[1] = v8;
  *v7 = v8;
  return **(_QWORD **)a1 + 16LL;
}
