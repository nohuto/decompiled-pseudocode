/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x180015B44
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18007AF80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180015BA0 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  v8 = 0;
  CMILMatrix::SetToInverse((CMILMatrix *)v7, a2);
  updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v7, 0LL);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, 0x18B3u, 0LL);
  else
    CDrawingContext::PopTransformInternal(this, 0);
  return v5;
}
