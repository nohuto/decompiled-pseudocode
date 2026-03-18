/*
 * XREFs of ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18022B73C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800AE83C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801D4A90 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801E2128 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18022B998 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CDrawingContext *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  struct CObjectCache *ObjectCache; // rax
  __int64 v9; // rcx
  char *v10; // rbx
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edi
  void **v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    v9 = (unsigned int)(v11 - 1);
    *((_DWORD *)ObjectCache + 1) = v9;
  }
  if ( v10 || (v10 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL)) != 0LL )
  {
    *(_OWORD *)(v10 + 8) = _xmm;
    *(_QWORD *)v10 = &CEmptyRegionDrawListBrush::`vftable';
    v10[52] = 0;
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v12 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v10 + 7) = v12;
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 9) = v10 + 80;
    *((_DWORD *)v10 + 20) = 0;
  }
  if ( v10 )
  {
    v15 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v10, a1, a2);
    v13 = v15;
    if ( v15 >= 0 )
    {
      *a4 = v10;
      return v13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1Fu);
    v14 = (void **)v10;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Du);
    v14 = 0LL;
  }
  if ( v10 && v14 )
    CEmptyRegionDrawListBrush::`scalar deleting destructor'(v14, 1);
  return v13;
}
