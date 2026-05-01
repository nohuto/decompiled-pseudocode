/*
 * XREFs of ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x18033FE24
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1803402A0 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180349DFC (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x18033F584 (--$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Micros.c)
 */

__int64 __fastcall ForegroundStaging::Initialize(ForegroundStaging *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
      (const char *)(unsigned int)v2);
  return v3;
}
