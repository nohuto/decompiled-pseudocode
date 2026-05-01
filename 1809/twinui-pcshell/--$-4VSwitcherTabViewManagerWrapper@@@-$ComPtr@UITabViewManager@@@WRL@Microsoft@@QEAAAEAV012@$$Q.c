/*
 * XREFs of ??$?4VSwitcherTabViewManagerWrapper@@@?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@@Z @ 0x1802659E0
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180271300 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18027FA40 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9DCC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
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
