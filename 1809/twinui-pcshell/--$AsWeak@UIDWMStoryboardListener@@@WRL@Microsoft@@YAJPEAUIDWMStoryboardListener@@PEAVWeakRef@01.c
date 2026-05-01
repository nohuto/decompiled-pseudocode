/*
 * XREFs of ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x1800462F4
 * Callers:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180046100 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18004AA10 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x180141E10 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18017D8F4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x18018BE10 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1801B3170 (-GetEventInvocationContext@-$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventI.c)
 *     ?RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C5C14 (-RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x1802AC828 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1802F2BFC (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x1803B08D4 (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IDWMStoryboardListener>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v2 = *a1;
  v10 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v10);
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
    if ( v4 >= 0 )
    {
      v5 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v6 = *a2;
      v9 = 0LL;
      v12 = v6;
      *a2 = v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v4;
}
