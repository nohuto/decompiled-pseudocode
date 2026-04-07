/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x18007839C
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x180078790 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800497E4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004B53C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x180078708 (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800787E0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180078830 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x180078880 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x1800788C4 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180078940 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x1800796B4 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x1800797A8 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180091538 (--1CContactManager@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A28FC (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800B18CC (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v2; // rdi
  CBaseObject **v4; // rsi
  CAnimationClockCoordinator *v5; // rcx
  __int64 v6; // rdi
  CTransitionVisualController *v7; // rcx
  __int64 v8; // rdi
  CWindowList *v9; // rcx
  wil::details **v10; // rsi
  CBaseObject *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  CTextCache *v15; // rcx
  CIconicBitmapRegistry *v16; // rcx
  CImmersiveIconicBitmapRegistry *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  void *v21; // rdx
  CBaseObject **v22; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 150);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v22 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 576, a2, &v22);
    if ( v22 )
    {
      v4 = v22;
      do
      {
        CBaseObject::Release(*v4++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v22);
    }
  }
  v5 = (CAnimationClockCoordinator *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 24) = 0LL;
  }
  v6 = *((_QWORD *)this + 30);
  if ( v6 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 30));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v6);
    *((_QWORD *)this + 30) = 0LL;
  }
  v7 = (CTransitionVisualController *)*((_QWORD *)this + 31);
  if ( v7 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v7, a2);
    *((_QWORD *)this + 31) = 0LL;
  }
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 23));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v8);
    *((_QWORD *)this + 23) = 0LL;
  }
  v9 = (CWindowList *)*((_QWORD *)this + 61);
  if ( v9 )
  {
    CWindowList::`vector deleting destructor'(v9, 1u);
    *((_QWORD *)this + 61) = 0LL;
  }
  if ( *((_QWORD *)this + 65) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 65) = 0LL;
  }
  CDesktopManager::ReleaseDesktopRenderTarget(this);
  CDesktopManager::ReleaseDXGIAdapter(this);
  v10 = (wil::details **)((char *)this + 272);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 34,
    0LL);
  v11 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = *((_QWORD *)this + 26);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 27);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 29);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (CTextCache *)*((_QWORD *)this + 33);
  if ( v15 )
  {
    CTextCache::`scalar deleting destructor'(v15, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
  v16 = (CIconicBitmapRegistry *)*((_QWORD *)this + 37);
  if ( v16 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v16, 1u);
    *((_QWORD *)this + 37) = 0LL;
  }
  v17 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 38);
  if ( v17 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v17, 1u);
    *((_QWORD *)this + 38) = 0LL;
  }
  v18 = *((_QWORD *)this + 36);
  if ( v18 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(*((__int64 **)this + 36));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v18);
    *((_QWORD *)this + 36) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v19 = *((_QWORD *)this + 5);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 160LL))(v19, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v20 = *((_QWORD *)this + 39);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)this + 39) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 94);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 72);
  if ( *v10 )
    wil::details::CloseHandle(*v10, v21);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 13);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
