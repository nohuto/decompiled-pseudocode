/*
 * XREFs of ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180073680
 * Callers:
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180073360 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180073470 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ??0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemoteSuperWetSharedSection@@I@Z @ 0x1801B26C0 (--0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemote.c)
 *     ?GetNextRunningEffect@CWARPDrawListEntry@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1801BB1F0 (-GetNextRunningEffect@CWARPDrawListEntry@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_.c)
 *     ??$make_unique@VCRemoteSuperWetSource@@PEAVCRemoteSuperWetSharedSection@@PEAVCCompositionSurfaceBitmap@@$0A@@std@@YA?AV?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@0@$$QEAPEAVCRemoteSuperWetSharedSection@@$$QEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801C7BE0 (--$make_unique@VCRemoteSuperWetSource@@PEAVCRemoteSuperWetSharedSection@@PEAVCCompositionSurface.c)
 *     ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C80B8 (-EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
