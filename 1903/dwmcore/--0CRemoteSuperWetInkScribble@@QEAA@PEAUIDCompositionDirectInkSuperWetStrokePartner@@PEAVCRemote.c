/*
 * XREFs of ??0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemoteSuperWetSharedSection@@I@Z @ 0x1801B26C0
 * Callers:
 *     ?CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801B27F0 (-CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@P.c)
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180073680 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@I@Z @ 0x1801B2704 (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@I@Z.c)
 */

CRemoteSuperWetInkScribble *__fastcall CRemoteSuperWetInkScribble::CRemoteSuperWetInkScribble(
        CRemoteSuperWetInkScribble *this,
        struct IDCompositionDirectInkSuperWetStrokePartner *a2,
        struct CRemoteSuperWetSharedSection *a3,
        unsigned int a4)
{
  CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(this, a2, a4);
  *(_QWORD *)this = &CRemoteSuperWetInkScribble::`vftable';
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    (_QWORD *)this + 4,
    (void (__fastcall ***)(_QWORD))a3);
  return this;
}
