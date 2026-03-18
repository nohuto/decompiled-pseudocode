/*
 * XREFs of ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180165EC0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180020564 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18016181C (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(
        const struct CVisualTree **this,
        struct MilRectF *a2,
        _BYTE *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  struct CRectanglesShape *v7; // rcx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v9; // rax
  int v10; // r8d
  const struct CShape *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct _LIST_ENTRY *Blink; // r8
  int v15; // eax
  __int64 v16; // rcx
  const struct CShape *v18; // [rsp+38h] [rbp-69h] BYREF
  char v19; // [rsp+40h] [rbp-61h]
  CVisual *v20[11]; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v21[4]; // [rsp+A4h] [rbp+3h] BYREF
  int v22; // [rsp+E4h] [rbp+43h]
  char v23; // [rsp+ECh] [rbp+4Bh]

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)v20);
  v20[0] = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  v23 = 1;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
  v18 = 0LL;
  v19 = 0;
  v21[0] = *(_OWORD *)TopByReference;
  v21[1] = *((_OWORD *)TopByReference + 1);
  v21[2] = *((_OWORD *)TopByReference + 2);
  v21[3] = *((_OWORD *)TopByReference + 3);
  v22 = *((_DWORD *)TopByReference + 16);
  ObjectCache = CThreadContext::GetObjectCache(v7);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (CRectanglesShape *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
    v11 = CRectanglesShape::CRectanglesShape(v9, a2);
  else
    v11 = 0LL;
  CShapePtr::Release((CShapePtr *)&v18);
  v18 = v11;
  v19 = 1;
  if ( v11 )
  {
    if ( *((_BYTE *)this[126] + 80 * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
      Blink = CVisual::FindTreeData(v20[0], this[757])[9].Blink;
    else
      Blink = (struct _LIST_ENTRY *)v21;
    v15 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
            (CDrawingContext *)this,
            &v18,
            (__int64)Blink,
            0LL,
            (__int64)v20,
            a3);
    v13 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1202u);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x11F1u);
  }
  CShapePtr::Release((CShapePtr *)&v18);
  return v13;
}
