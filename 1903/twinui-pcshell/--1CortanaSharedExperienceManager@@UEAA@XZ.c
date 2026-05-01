/*
 * XREFs of ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x18017D388
 * Callers:
 *     ??_ECortanaSharedExperienceManager@@UEAAPEAXI@Z @ 0x18017D820 (--_ECortanaSharedExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180100F80 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall CortanaSharedExperienceManager::~CortanaSharedExperienceManager(CortanaSharedExperienceManager *this)
{
  __int64 v2; // rcx
  struct _TP_TIMER *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  void *v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rcx

  *(_QWORD *)this = &CortanaSharedExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &CortanaSharedExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>'};
  *((_QWORD *)this + 2) = &CortanaSharedExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 3) = &CortanaSharedExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInitializeTrustedComponentForegroundControl>'};
  if ( *((_QWORD *)this + 64) )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 160LL))(*((_QWORD *)this + 63));
  }
  if ( *((_QWORD *)this + 65) )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 176LL))(*((_QWORD *)this + 63));
  }
  v2 = *((_QWORD *)this + 63);
  if ( v2 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 59);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 57);
  if ( v4 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
  v5 = (void *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 48);
  if ( v6 )
  {
    *((_QWORD *)this + 48) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 45);
  if ( v7 )
  {
    *((_QWORD *)this + 45) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 42);
  if ( v8 )
  {
    *((_QWORD *)this + 42) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 39);
  if ( v9 )
  {
    *((_QWORD *)this + 39) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v10 )
  {
    *((_QWORD *)this + 36) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10);
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  if ( v11 )
  {
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v12 )
  {
    *((_QWORD *)this + 30) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
  }
  v13 = (volatile signed __int32 *)*((_QWORD *)this + 27);
  if ( v13 )
  {
    *((_QWORD *)this + 27) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v13);
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)this + 24);
  if ( v14 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
  }
  v15 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v15 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
  }
  v16 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v16 )
  {
    *((_QWORD *)this + 18) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
  }
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v17 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v18 )
  {
    *((_QWORD *)this + 12) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
  }
  v20 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  if ( v20 )
  {
    *((_QWORD *)this + 6) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>((__int64)this);
}
