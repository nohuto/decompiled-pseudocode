/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007EC10 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800AEFB8 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016B6F4 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802538D0 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180253B28 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007DF68 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18007E050 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  const struct CMILMatrix *v6; // r11
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  _BYTE v13[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+70h] [rbp-68h]
  _BYTE v15[64]; // [rsp+80h] [rbp-58h] BYREF
  int v16; // [rsp+C0h] [rbp-18h]

  if ( *(_DWORD *)this && a3 )
  {
    v14 = 0;
    v16 = 0;
    v4 = CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)this, (__int64)v13);
    v7 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Du, 0LL);
    }
    else
    {
      CMILMatrix::Multiply(v6, (const struct CMILMatrix *)v13, (struct CMILMatrix *)v15);
      v8 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)v15);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x45u, 0LL);
    }
  }
  else
  {
    v11 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)a2);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x36u, 0LL);
  }
  return v7;
}
