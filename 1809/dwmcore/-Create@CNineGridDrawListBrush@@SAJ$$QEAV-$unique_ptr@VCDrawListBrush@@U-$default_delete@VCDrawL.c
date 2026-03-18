/*
 * XREFs of ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000B070 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000B548 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180018BE0 (-CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEA.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001DC70 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CC204 (-TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18000D0B0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000D1DC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ??0CNineGridDrawListBrush@@AEAA@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_N@Z @ 0x18000E1BC (--0CNineGridDrawListBrush@@AEAA@$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawList.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Create(
        struct CNineGridDrawListBrush *a1,
        int a2,
        int a3,
        char a4,
        CNineGridDrawListBrush **a5)
{
  int v8; // ebp
  struct CObjectCache *ObjectCache; // r10
  _QWORD *v10; // rax
  int v11; // ecx
  unsigned int v12; // ecx
  CNineGridDrawListBrush *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  CNineGridDrawListBrush *v18; // rcx

  v8 = (int)a1;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = HeapAlloc(WPF::g_processHeap, 0, 0x230uLL)) != 0LL )
    v13 = (CNineGridDrawListBrush *)CNineGridDrawListBrush::CNineGridDrawListBrush((_DWORD)v10, v8, a2, a3, a4);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = CNineGridDrawListBrush::Initialize(v13);
    v16 = v14;
    if ( v14 >= 0 )
    {
      *a5 = v13;
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2Cu);
    v18 = v13;
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2Au);
    v18 = 0LL;
  }
  if ( v13 && v18 )
    CNineGridDrawListBrush::`scalar deleting destructor'(v18, 1u);
  return v16;
}
