/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFE34
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800E0190 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$ve.c)
 *     ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z @ 0x1800E021C (--A-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  int v8; // eax
  char v9; // cl
  int v10; // ecx
  SIZE_T v11; // rax
  LPVOID v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  __int16 ShaderLinkingArgument; // cx
  __int128 v21; // [rsp+30h] [rbp-50h]
  unsigned __int64 v22[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  char v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+74h] [rbp-Ch]

  v6 = 0;
  (*(void (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    v22,
    *(unsigned int *)(a1 + 16));
  v7 = v23;
  *(_BYTE *)(a1 + 88) = v24;
  *(_QWORD *)(a1 + 96) = v25;
  *(_BYTE *)(a1 + 108) = v27;
  v8 = v26;
  v9 = v26;
  *(_OWORD *)(a1 + 72) = v7;
  v10 = v9 & 0xF;
  if ( v10 )
    v8 = v8 - v10 + 16;
  *(_DWORD *)(a1 + 104) = v8;
  v11 = 2 * v22[0];
  if ( !is_mul_ok(v22[0], 2uLL) )
    v11 = -1LL;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v12;
  if ( v15 )
  {
    WPF::ProcessHeapImpl::Free((void *)v15);
    v12 = *(LPVOID *)(a1 + 112);
  }
  if ( v12 )
  {
    v16 = v22[0];
    v17 = 0;
    if ( (__int64)v22[0] > 0 )
    {
      v15 = 0LL;
      v18 = 0LL;
      do
      {
        ShaderLinkingArgument = *(_WORD *)gsl::span<enum ShaderLinkingArgument const,-1>::operator[](v22, v15, v13, v14);
        if ( (ShaderLinkingArgument & 0xFF00) == 0x200 )
          ShaderLinkingArgument = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                                    a1,
                                    (unsigned __int8)ShaderLinkingArgument,
                                    a2,
                                    a3);
        ++v17;
        *(_WORD *)(v18 + *(_QWORD *)(a1 + 112)) = ShaderLinkingArgument;
        v18 += 2LL;
        v16 = v22[0];
        v15 = v17;
      }
      while ( v17 < (__int64)v22[0] );
      v12 = *(LPVOID *)(a1 + 112);
    }
    *(_QWORD *)&v21 = v16;
    if ( v16 < 0 || (*((_QWORD *)&v21 + 1) = v12) == 0LL && v16 )
    {
      gsl::details::terminate((gsl::details *)v15);
      JUMPOUT(0x1800DFFB8LL);
    }
    *(_OWORD *)(a1 + 56) = v21;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x207u);
  }
  return v6;
}
