/*
 * XREFs of ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C017C730
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
  (*(void (__fastcall **)(DirectComposition::CCaptureRenderTargetMarshaler *))(*(_QWORD *)this + 304LL))(this);
}
