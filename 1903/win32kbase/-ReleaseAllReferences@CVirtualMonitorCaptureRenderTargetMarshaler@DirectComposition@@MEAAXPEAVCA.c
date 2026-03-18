/*
 * XREFs of ?ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01BF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01BEAE0 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 */

void __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CCaptureRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
