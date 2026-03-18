/*
 * XREFs of ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801B2344
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800787A8 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180159CBC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 */

__int64 __fastcall CColorDrawListBrush::Create(struct _D3DCOLORVALUE *a1, struct CColorDrawListBrush **a2)
{
  unsigned int v4; // ebx
  struct CObjectCache *ObjectCache; // rax
  __int64 v6; // rcx
  char *v7; // r8
  int v8; // r10d

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CColorDrawListBrush *)a1);
  v7 = 0LL;
  v8 = *((_DWORD *)ObjectCache + 1);
  if ( v8 )
  {
    v7 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v7;
    *((_DWORD *)ObjectCache + 1) = v8 - 1;
  }
  if ( v7 || (v7 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    *(_OWORD *)(v7 + 8) = _xmm;
    v7[52] = 0;
    *(_QWORD *)v7 = &CColorDrawListBrush::`vftable';
    *((_QWORD *)v7 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(struct _D3DCOLORVALUE *)(v7 + 56) = *(struct _D3DCOLORVALUE *)&a1->r;
  }
  *a2 = (struct CColorDrawListBrush *)v7;
  if ( !v7 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x29u, 0LL);
  }
  return v4;
}
