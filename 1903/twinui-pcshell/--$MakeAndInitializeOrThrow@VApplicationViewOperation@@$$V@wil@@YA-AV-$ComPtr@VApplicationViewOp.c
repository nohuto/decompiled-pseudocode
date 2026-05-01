/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x18039ABCC
 * Callers:
 *     _lambda_490495f22ac349c27ec948cdb66a4eae_::operator() @ 0x18039B750 (_lambda_490495f22ac349c27ec948cdb66a4eae_--operator().c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x18039C140 (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x18039A9DC (--$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicat.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 **__fastcall wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(
        volatile signed __int64 **a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
