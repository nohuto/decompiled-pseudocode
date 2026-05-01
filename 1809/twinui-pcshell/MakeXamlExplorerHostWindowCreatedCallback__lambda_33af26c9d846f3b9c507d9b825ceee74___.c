/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___ @ 0x18027D2C0
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802809C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___::XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___ @ 0x18027D8F4 (XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___--XamlExplorerH.c)
 */

__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74_(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___::XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___(
               v5,
               a2)) != 0 )
  {
    v7 = v6 + 32;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = v7;
  if ( v7 )
  {
    v10 = 0LL;
    *a1 = v7;
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
