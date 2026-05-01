/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180096030
 * Callers:
 *     ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800978F0 (-CreateTitlebarConfiguration@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x180095D90 (--$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D554 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTitlebarConfiguration,ApplicationViewTitlebarConfiguration,>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"internal\\sdk\\inc\\wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
