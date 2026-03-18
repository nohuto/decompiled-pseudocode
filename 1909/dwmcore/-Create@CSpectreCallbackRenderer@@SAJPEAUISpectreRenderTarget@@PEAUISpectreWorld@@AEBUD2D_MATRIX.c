/*
 * XREFs of ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801B05C4
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x18015868C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801B042C (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Create(
        struct CSpectreCallbackRenderer *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        __int128 *a7,
        __int64 *a8)
{
  struct CObjectCache *ObjectCache; // rax
  unsigned int v13; // ebx
  _QWORD *v14; // r10
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v19; // [rsp+40h] [rbp-18h] BYREF

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v13 = 0;
  v14 = 0LL;
  v15 = *((_DWORD *)ObjectCache + 1);
  if ( v15 )
  {
    v14 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v14;
    *((_DWORD *)ObjectCache + 1) = v15 - 1;
  }
  if ( v14 || (v14 = DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    v19 = *a7;
    v17 = CSpectreCallbackRenderer::CSpectreCallbackRenderer((__int64)v14, (__int64)a1, a2, a3, a4, a5, a6, &v19);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 16));
    *a8 = v17;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x22u, 0LL);
  }
  return v13;
}
