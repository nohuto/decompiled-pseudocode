/*
 * XREFs of ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1801C7898
 * Callers:
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1801C8094 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800E5970 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x1801C80D0 (--_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::~PeoplePaneViewManager(PeoplePaneViewManager *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  std::_Ref_count_base *v14; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 64);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
  v3 = (void *)*((_QWORD *)this + 58);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 59) )
    {
      v5 = 0LL;
      do
      {
        PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
          (PeoplePaneViewManager::ViewChangeListener *)(v5 + *((_QWORD *)this + 58)),
          v2);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 59) );
      v3 = (void *)*((_QWORD *)this + 58);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 58) = 0LL;
  }
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 344));
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 344,
    v6);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 344,
    v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 216));
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 216,
    v8);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 216,
    v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  v10 = (__int64 *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 22);
    if ( v10 != v11 )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(v10++);
      while ( v10 != v11 );
      v10 = (__int64 *)*((_QWORD *)this + 21);
    }
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 23) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v12 )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 18);
    if ( v12 != v13 )
    {
      do
      {
        v14 = (std::_Ref_count_base *)v12[1];
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v12 += 2;
      }
      while ( v12 != v13 );
      v12 = (_QWORD *)*((_QWORD *)this + 17);
    }
    std::_Deallocate<16,0>(
      v12,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PeoplePaneViewManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
