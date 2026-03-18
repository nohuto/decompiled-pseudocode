/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180032950 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180035584 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180035630 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800356F8 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180037368 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B81EC (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rdx

  *a2 += 39LL;
  v4 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v4 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v4, a3, a4);
    JUMPOUT(0x1800C4312LL);
  }
  *a1 = v4;
}
