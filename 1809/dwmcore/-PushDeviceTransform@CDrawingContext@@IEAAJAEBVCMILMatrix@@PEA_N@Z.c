/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014668
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800145A0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014770 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  unsigned int v5; // ecx
  bool *v6; // r9
  int updated; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-B8h]
  _BYTE v12[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+70h] [rbp-68h]
  _DWORD v14[20]; // [rsp+80h] [rbp-58h] BYREF

  v14[16] = 0;
  v13 = 0;
  if ( !CMILMatrix::SetToInverse((CMILMatrix *)v14, a2) )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304441, 0x1941u);
    return v9;
  }
  updated = CDrawingContext::UpdateDeviceTransform(this, a2, v6);
  v9 = updated;
  if ( updated < 0 )
  {
    v11 = 6469;
    goto LABEL_8;
  }
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v12);
  CMILMatrix::Multiply((CMILMatrix *)v12, a2);
  updated = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v12, 0, 0);
  v9 = updated;
  if ( updated < 0 )
  {
    v11 = 6479;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, v11);
  }
  return v9;
}
