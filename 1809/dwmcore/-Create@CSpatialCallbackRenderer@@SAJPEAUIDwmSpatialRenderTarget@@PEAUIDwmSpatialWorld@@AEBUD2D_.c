/*
 * XREFs of ?Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMPEAPEAV1@@Z @ 0x1801839B4
 * Callers:
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSpatialCallbackRenderer@@AEAA@PEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM@Z @ 0x180183878 (--0CSpatialCallbackRenderer@@AEAA@PEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MAT.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpatialCallbackRenderer@@@Z @ 0x1801E2164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpatialCallbackRenderer@@@Z.c)
 */

__int64 __fastcall CSpatialCallbackRenderer::Create(
        struct IDwmSpatialRenderTarget *a1,
        struct IDwmSpatialWorld *a2,
        const struct D2D_MATRIX_4X4_F *a3,
        const struct D2D_VECTOR_3F *a4,
        float a5,
        float a6,
        struct CSpatialCallbackRenderer **a7)
{
  struct CObjectCache *ObjectCache; // r10
  unsigned int v12; // ebx
  CSpatialCallbackRenderer *v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rax

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v12 = 0;
  v13 = 0LL;
  v14 = *((_DWORD *)ObjectCache + 1);
  if ( v14 )
  {
    v13 = (CSpatialCallbackRenderer *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v13;
    *((_DWORD *)ObjectCache + 1) = v14 - 1;
  }
  if ( v13 || (v13 = (CSpatialCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL)) != 0LL )
    v16 = (volatile signed __int32 *)CSpatialCallbackRenderer::CSpatialCallbackRenderer(v13, a1, a2, a3, a4, a5, a6);
  else
    v16 = 0LL;
  if ( v16 )
  {
    _InterlockedIncrement(v16 + 4);
    *a7 = (struct CSpatialCallbackRenderer *)v16;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x20u);
  }
  return v12;
}
