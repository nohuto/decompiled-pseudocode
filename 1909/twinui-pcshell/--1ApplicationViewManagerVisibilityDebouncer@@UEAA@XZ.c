/*
 * XREFs of ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18017754C
 * Callers:
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x1801777E0 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800824DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x1801777A8 (--_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::~ApplicationViewManagerVisibilityDebouncer(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  unsigned int v6; // edx
  void *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi

  *(_QWORD *)this = &ApplicationViewManagerVisibilityDebouncer::`vftable';
  *((_QWORD *)this + 1) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 2) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewCollectionTestHook'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 25) )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)(*((_QWORD *)this + 24) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 25) );
      v2 = (void *)*((_QWORD *)this + 24);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  v4 = (__int64 *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 16);
    if ( v4 != v5 )
    {
      do
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v4 + 1);
        v4 += 2;
      }
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 15);
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile int **)this + 13);
  v7 = (void *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      v9 = 0LL;
      do
      {
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
          (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(v9 + *((_QWORD *)this + 9)),
          v6);
        ++v8;
        v9 += 32LL;
      }
      while ( v8 < *((_QWORD *)this + 10) );
      v7 = (void *)*((_QWORD *)this + 9);
    }
    CoTaskMemFree(v7);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
