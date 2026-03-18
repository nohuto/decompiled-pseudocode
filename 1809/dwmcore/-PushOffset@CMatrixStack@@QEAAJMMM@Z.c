/*
 * XREFs of ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801E3C38
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180166408 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x180013B8C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18002E66C (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x1800326D8 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1801E2628 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CMatrixStack::PushOffset(CMatrixStack *this, float a2, float a3, float a4)
{
  unsigned int *v4; // r11
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm4_4
  unsigned int *v11; // r11
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]

  v16 = 0;
  if ( *(_DWORD *)this )
  {
    v8 = CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)this, (__int64)v15);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Eu);
    }
    else
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v15, v10, a3, a4);
      v12 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v11, (__int64)v15);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x77u);
    }
  }
  else
  {
    CMILMatrix::SetTranslation((CMILMatrix *)v15, a2, a3, a4);
    v5 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v4, (__int64)v15);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x66u);
  }
  return v7;
}
