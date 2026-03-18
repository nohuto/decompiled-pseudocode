/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFAC0
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800E0190 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$ve.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _WORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-18h]

  v3 = 0;
  *(_BYTE *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  v7 = HeapAlloc(WPF::g_processHeap, 0, 4uLL);
  v8 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    v7 = *(_WORD **)(a1 + 112);
  }
  if ( v7 )
  {
    *(_QWORD *)&v11 = 2LL;
    *((_QWORD *)&v11 + 1) = v7;
    *(_OWORD *)(a1 + 56) = v11;
    *v7 = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 0LL, a2, a3);
    v9 = *(_QWORD *)(a1 + 112);
    *(_WORD *)(v9 + 2) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 1LL, a2, a3);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024882, 0x231u);
  }
  return v3;
}
