/*
 * XREFs of ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___::Run @ 0x180061FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___--Run.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180063A44 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x18018231C (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1801CE2D4 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Int.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802055E8 (--$CreateAgileHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Micros.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802097CC (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Wind.c)
 *     ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x18023E0F8 (--$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802D4A58 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@Composable.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802D95A4 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Inte.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x18032D77C (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(
        _QWORD *a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(*a1, &v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return *a1;
}
