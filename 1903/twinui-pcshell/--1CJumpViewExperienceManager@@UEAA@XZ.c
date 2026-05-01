/*
 * XREFs of ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18019B0E4
 * Callers:
 *     ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18019B630 (--_ECJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180100F80 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18019B2F4 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18019B9E8 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180412AF0 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CJumpViewExperienceManager::~CJumpViewExperienceManager(CJumpViewExperienceManager *this)
{
  struct _TP_TIMER *v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx

  *(_QWORD *)this = &CJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 2) = &CJumpViewExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 4) = &CJumpViewExperienceManager::`vftable'{for `IActiveZBandNotificationForMonitor'};
  *((_QWORD *)this + 5) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 8) = &CJumpViewExperienceManager::`vftable';
  CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(this);
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 103);
  if ( v2 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((CJumpViewExperienceManager *)((char *)this + 512));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CJumpViewExperienceManager *)((char *)this + 448));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CJumpViewExperienceManager *)((char *)this + 416));
  WindowsDeleteString(*((HSTRING *)this + 51));
  *((_QWORD *)this + 51) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  WindowsDeleteString(*((HSTRING *)this + 43));
  *((_QWORD *)this + 43) = 0LL;
  CSingleViewShellExperience::~CSingleViewShellExperience((CJumpViewExperienceManager *)((char *)this + 152));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>((__int64)this);
}
