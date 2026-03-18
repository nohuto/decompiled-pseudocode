/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180034BBC
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x180037CF8 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  void *v7; // rax
  void *v8; // rcx
  _WORD *v9; // rbx
  __int64 v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-18h]

  v3 = 0;
  *(_BYTE *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  *(_WORD *)(a1 + 108) = 10;
  *(_OWORD *)(a1 + 72) = 0LL;
  v7 = DefaultHeap::Alloc(4uLL);
  v8 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    operator delete(v8);
    v7 = *(void **)(a1 + 112);
  }
  if ( v7 )
  {
    *((_QWORD *)&v12 + 1) = v7;
    *(_QWORD *)&v12 = 2LL;
    *(_OWORD *)(a1 + 56) = v12;
    v9 = *(_WORD **)(a1 + 112);
    *v9 = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 512, 0, a2, a3);
    v10 = *(_QWORD *)(a1 + 112);
    *(_WORD *)(v10 + 2) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(a1, 512, 1, a2, a3);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x226u, 0LL);
  }
  return v3;
}
