/*
 * XREFs of ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01BEAE0
 * Callers:
 *     ?ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01BF1B0 (-ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C01BEB30 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  void *v5; // rcx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    DxgkReleaseCompositionObjectReference(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this);
}
