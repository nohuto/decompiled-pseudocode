/*
 * XREFs of ??$make_unique@VCRemoteSuperWetSource@@PEAVCRemoteSuperWetSharedSection@@PEAVCCompositionSurfaceBitmap@@$0A@@std@@YA?AV?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@0@$$QEAPEAVCRemoteSuperWetSharedSection@@$$QEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801C7BE0
 * Callers:
 *     ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C80B8 (-EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180073680 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CRemoteSuperWetSource,CRemoteSuperWetSharedSection *,CCompositionSurfaceBitmap *,0>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD),
        __int64 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  void (__fastcall ***v8)(_QWORD); // rdx
  _QWORD *result; // rax

  v6 = operator new(0x18uLL);
  if ( v6 )
  {
    v7 = *a3;
    v8 = *a2;
    *v6 = &CRemoteSuperWetSource::`vftable';
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      v6 + 1,
      v8);
    v6[2] = v7;
  }
  else
  {
    v6 = 0LL;
  }
  result = a1;
  *a1 = v6;
  return result;
}
