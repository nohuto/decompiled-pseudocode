/*
 * XREFs of ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18008F258
 * Callers:
 *     ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x18008F840 (--_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18008FFCC (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180090EE8 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1ViewChangeListener@PeoplePaneViewManager@@QEAA@XZ @ 0x180174EC8 (--1ViewChangeListener@PeoplePaneViewManager@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180412AF0 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(
        CBaseTrayFlyoutExperienceManager *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CBaseTrayFlyoutExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CBaseTrayFlyoutExperienceManager::`vftable';
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(this, 0);
  *((_QWORD *)this + 54) = 0LL;
  v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 55);
  if ( v2 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 55);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 55);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 320));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 288));
  PeoplePaneViewManager::ViewChangeListener::~ViewChangeListener((CBaseTrayFlyoutExperienceManager *)((char *)this + 272));
  CSingleViewShellExperience::~CSingleViewShellExperience((CBaseTrayFlyoutExperienceManager *)((char *)this + 72));
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>((__int64)this);
}
