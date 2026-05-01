/*
 * XREFs of ??$?4VSwitcherTabViewManagerWrapper@@@?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@@Z @ 0x1802BE8E0
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802CA5A0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802D9020 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180349DFC (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ITabViewManager>::operator=<SwitcherTabViewManagerWrapper>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a2 )
    v3 = *a2 + 8LL;
  else
    v3 = 0LL;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  v6 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return a1;
}
