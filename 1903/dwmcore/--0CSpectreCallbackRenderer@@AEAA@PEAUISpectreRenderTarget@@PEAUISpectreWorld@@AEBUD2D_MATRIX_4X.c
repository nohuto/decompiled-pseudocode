/*
 * XREFs of ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801B1CEC
 * Callers:
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801B1E84 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801B1BB8 (--$-0V-$span_iterator@V-$span@PEAVCCompositionLight@@$0-0@gsl@@$0A@@details@gsl@@X@-$vector@PEAV.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::CSpectreCallbackRenderer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CSpectreCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *(_QWORD *)(a1 + 8) = &CSpectreCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 32) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_OWORD *)(a1 + 40) = *a4;
  *(_QWORD *)&v14 = a8;
  *(_OWORD *)(a1 + 56) = a4[1];
  *(_OWORD *)(a1 + 72) = a4[2];
  *(_OWORD *)(a1 + 88) = a4[3];
  *(_QWORD *)(a1 + 104) = *(_QWORD *)a5;
  v11 = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 116) = a6;
  *(_DWORD *)(a1 + 112) = v11;
  *((_QWORD *)&v14 + 1) = *a8;
  v12 = v14;
  v14 = (unsigned __int64)a8;
  v15 = v12;
  *(_DWORD *)(a1 + 120) = a7;
  std::vector<CCompositionLight *>::vector<CCompositionLight *>((_QWORD *)(a1 + 128), &v14, &v15);
  return a1;
}
