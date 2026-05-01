/*
 * XREFs of ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801BB514
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x1801BBC84 (--_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801081AC (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180109DA8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(
        CortanaStoreAppExperienceManager *this)
{
  HWND v2; // rcx
  HWND v3; // rcx
  Concurrency::details::_RefCounter *v4; // rcx
  Concurrency::details::_RefCounter *v5; // rcx
  Concurrency::details::_RefCounter *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  void *v9; // rdx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CortanaStoreAppExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 6) = &CortanaStoreAppExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 15) = &CortanaStoreAppExperienceManager::`vftable'{for `ICortanaStoreAppExperienceManager'};
  *((_QWORD *)this + 16) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 17) = &CortanaStoreAppExperienceManager::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 18) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer>'};
  v2 = (HWND)*((_QWORD *)this + 49);
  if ( v2 )
    DestroyWindow(v2);
  v3 = (HWND)*((_QWORD *)this + 48);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 47);
  if ( v4 )
    Concurrency::details::_RefCounter::_Destroy(v4);
  v5 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 46);
  if ( v5 )
    Concurrency::details::_RefCounter::_Destroy(v5);
  v6 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 45);
  if ( v6 )
    Concurrency::details::_RefCounter::_Destroy(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  v7 = *((_QWORD *)this + 39);
  if ( v7 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v8 + 152));
    SRWLock = (PSRWLOCK)(v8 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v8, v9);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(this);
}
