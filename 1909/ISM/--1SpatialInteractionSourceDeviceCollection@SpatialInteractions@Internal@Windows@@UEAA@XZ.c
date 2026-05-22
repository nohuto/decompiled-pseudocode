/*
 * XREFs of ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800E0888
 * Callers:
 *     ??_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800E10E0 (--_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800943CC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalClose@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18009D690 (-InternalClose@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Mi.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800CAC20 (-clear@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     ?_Tidy@?$deque@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@V?$allocator@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@2@@std@@IEAAXXZ @ 0x1800E6950 (-_Tidy@-$deque@V-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInterac.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800E69EC (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$00@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1800E6AA8 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800E6AA8.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::~SpatialInteractionSourceDeviceCollection(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  void *v2; // rcx
  int LastError; // eax
  struct _TP_WORK *v4; // rbx
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  volatile int *v7; // rdx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 87);
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x3FC);
  *((_QWORD *)this + 85) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  if ( *((_QWORD *)this + 86) )
  {
    if ( !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::InternalClose((__int64)this + 680) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      RaiseException(LastError, 1u, 0, 0LL);
    }
    *((_QWORD *)this + 86) = 0LL;
  }
  std::deque<std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>>::_Tidy((char *)this + 632);
  std::_Deallocate<16,0>(*((void **)this + 79), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 79) = 0LL;
  std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,1>>::erase(
    (char *)this + 608,
    &v8,
    **((_QWORD **)this + 76));
  std::_Deallocate<16,0>(*((void **)this + 76), (const struct std::nothrow_t *)0x48);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 75);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 74);
  v4 = (struct _TP_WORK *)*((_QWORD *)this + 73);
  if ( v4 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 73), 0);
    CloseThreadpoolWork(v4);
  }
  std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy((char *)this + 544);
  std::_Deallocate<16,0>(*((void **)this + 68), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 68) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::clear((_QWORD *)this + 60);
  std::_Deallocate<16,0>(*((void **)this + 60), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 11);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 51);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 50);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 9);
  v5 = (__int64 *)*((_QWORD *)this + 42);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 43);
    if ( v5 != v6 )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v5++);
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 42);
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 44) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 40);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 39);
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 17);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v7);
}
