/*
 * XREFs of ??$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA?AV?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@XZ @ 0x1802DF284
 * Callers:
 *     ?XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EFF08 (-XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x1802DF1C4 (--$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHo.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802EA538 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
XamlAllUpViewHost **__fastcall wil::MakeAndInitializeOrThrow<XamlAllUpViewHost,>(XamlAllUpViewHost **a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<XamlAllUpViewHost,XamlAllUpViewHost,>(a1);
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
