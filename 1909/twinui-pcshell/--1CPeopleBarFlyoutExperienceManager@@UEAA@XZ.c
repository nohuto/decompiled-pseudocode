/*
 * XREFs of ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x1801AD7BC
 * Callers:
 *     ??_ECPeopleBarFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1801ADD60 (--_ECPeopleBarFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180097D3C (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18011FFC0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801AD908 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801AECC4 (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18042FC7C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPeopleBarFlyoutExperienceManager::~CPeopleBarFlyoutExperienceManager(
        CPeopleBarFlyoutExperienceManager *this)
{
  struct _TP_TIMER *v2; // rcx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  __int64 v4; // rcx
  volatile int *v5; // rdx

  *(_QWORD *)this = &CPeopleBarFlyoutExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager'};
  *((_QWORD *)this + 1) = &CPeopleBarFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 2) = &CPeopleBarFlyoutExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &CPeopleBarFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 4) = &CPeopleBarFlyoutExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 5) = &CPeopleBarFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 8) = &CPeopleBarFlyoutExperienceManager::`vftable';
  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(this, 0);
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 84);
  if ( v2 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
  *((_QWORD *)this + 81) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 82);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 82);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 82);
  v4 = *((_QWORD *)this + 79);
  if ( v4 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this + 320));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  CSingleViewShellExperience::~CSingleViewShellExperience((CPeopleBarFlyoutExperienceManager *)((char *)this + 112));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>(
    (__int64)this,
    v5);
}
