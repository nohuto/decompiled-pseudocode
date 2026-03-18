/*
 * XREFs of ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x180011F70
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180011164 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x180011DCC (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x180011EF0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct IRenderTarget *__fastcall CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(
        CWindowBackgroundTreatment *this,
        int (__fastcall ***a2)(const struct IRenderTarget *, GUID *, CWindowBackgroundTreatment **))
{
  int (__fastcall **v2)(const struct IRenderTarget *, GUID *, CWindowBackgroundTreatment **); // rax
  CWindowBackgroundTreatment *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = *a2;
  v4 = 0LL;
  if ( (*v2)((const struct IRenderTarget *)a2, &GUID_b73b1159_a295_4c76_bb56_c18e282ae007, &v4) < 0 )
    return 0LL;
  (*(void (__fastcall **)(CWindowBackgroundTreatment *))(*(_QWORD *)v4 + 16LL))(v4);
  return v4;
}
