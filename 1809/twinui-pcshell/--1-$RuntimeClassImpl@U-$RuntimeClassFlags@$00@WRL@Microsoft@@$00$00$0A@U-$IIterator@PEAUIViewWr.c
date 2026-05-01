/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801194A8
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180119D80 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationCha.c)
 *     ??_G?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180119E80 (--_G-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Founda.c)
 *     ??_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180119F30 (--_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x18014F510 (--_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x18016CC30 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1801B12B8 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 *     ??_E?$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z @ 0x1801B1950 (--_E-$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z.c)
 *     ??_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z @ 0x1801BD180 (--_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_ETabAppPolicySettings@@UEAAPEAXI@Z @ 0x1801CD370 (--_ETabAppPolicySettings@@UEAAPEAXI@Z.c)
 *     ??_GViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801D7BD0 (--_GViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ETabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18020B410 (--_ETabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180224E90 (--1-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIWindowingEnvironmentSettings@ViewMan.c)
 *     ??_GWindowingEnvironmentSettings@@UEAAPEAXI@Z @ 0x1802257F0 (--_GWindowingEnvironmentSettings@@UEAAPEAXI@Z.c)
 *     ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x180249F30 (--_G-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@deta.c)
 *     ??_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x1802D5EA0 (--_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x1802DADF0 (--_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
}
