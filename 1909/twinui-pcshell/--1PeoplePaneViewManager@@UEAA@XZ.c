/*
 * XREFs of ??1PeoplePaneViewManager@@UEAA@XZ @ 0x18023E8BC
 * Callers:
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x18023EED8 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180126B98 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x18023EF14 (--_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::~PeoplePaneViewManager(PeoplePaneViewManager *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  std::_Ref_count_base *v10; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 71);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 70);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  v3 = (void *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 61) )
    {
      v5 = 0LL;
      do
      {
        PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
          (PeoplePaneViewManager::ViewChangeListener *)(v5 + *((_QWORD *)this + 60)),
          v2);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 61) );
      v3 = (void *)*((_QWORD *)this + 60);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 60) = 0LL;
  }
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 352));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this + 352);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 216));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this + 216);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  v6 = (__int64 *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 22);
    if ( v6 != v7 )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(v6++);
      while ( v6 != v7 );
      v6 = (__int64 *)*((_QWORD *)this + 21);
    }
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 23) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 18);
    if ( v8 != v9 )
    {
      do
      {
        v10 = (std::_Ref_count_base *)v8[1];
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
        v8 += 2;
      }
      while ( v8 != v9 );
      v8 = (_QWORD *)*((_QWORD *)this + 17);
    }
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PeoplePaneViewManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
