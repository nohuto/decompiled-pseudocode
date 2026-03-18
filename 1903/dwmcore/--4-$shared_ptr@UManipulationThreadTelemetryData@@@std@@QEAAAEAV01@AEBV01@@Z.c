/*
 * XREFs of ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180193D28
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180194C54 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D7994 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180235CD8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x180262FD0 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180187718 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<ManipulationThreadTelemetryData>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
