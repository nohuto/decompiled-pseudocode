/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014518
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180014450 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001461C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304441, 0x1895u, 0LL);
    return v9;
  }
  updated = CDrawingContext::UpdateDeviceTransform(this, a2, v6);
  v9 = updated;
  if ( updated < 0 )
  {
    v11 = 6297;
    goto LABEL_8;
  }
  CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)v12);
  CMILMatrix::Multiply((CMILMatrix *)v12, a2);
  updated = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v12, 0, 0);
  v9 = updated;
  if ( updated < 0 )
  {
    v11 = 6307;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, v11, 0LL);
  }
  return v9;
}
