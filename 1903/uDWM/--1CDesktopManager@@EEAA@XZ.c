/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x18007E9CC
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x18007EDD0 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800426B0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18004B968 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DA14 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x18007ED48 (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18007EE20 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18007EE70 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x18007EEC0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x18007EF04 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x18007EF80 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x18007FE98 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18007FF8C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180096100 (--1CContactManager@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A70AC (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800B65B4 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800B7BD0 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
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
  __int64 v11; // rdx
  CBaseObject *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  CTextCache *v16; // rcx
  CIconicBitmapRegistry *v17; // rcx
  CImmersiveIconicBitmapRegistry *v18; // rcx
  __int64 *v19; // rdi
  __int64 v20; // rcx
  CCompositor *v21; // rcx
  CBaseObject *v22; // rcx
  __int64 v23; // rcx
  void *v24; // rdx
  CBaseObject *v25; // rcx
  CBaseObject **v26; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 150);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v26 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 576, a2, &v26);
    if ( v26 )
    {
      v4 = v26;
      do
      {
        CBaseObject::Release(*v4++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v26);
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
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 34,
    0LL);
  v12 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = *((_QWORD *)this + 26);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 27);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 29);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (CTextCache *)*((_QWORD *)this + 33);
  if ( v16 )
  {
    CTextCache::`scalar deleting destructor'(v16, 1u);
    *((_QWORD *)this + 33) = 0LL;
  }
  v17 = (CIconicBitmapRegistry *)*((_QWORD *)this + 37);
  if ( v17 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v17, 1u);
    *((_QWORD *)this + 37) = 0LL;
  }
  v18 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 38);
  if ( v18 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v18, 1u);
    *((_QWORD *)this + 38) = 0LL;
  }
  v19 = (__int64 *)*((_QWORD *)this + 36);
  if ( v19 )
  {
    v20 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    (*(void (__fastcall **)(WPF::HeapBase *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v19);
    *((_QWORD *)this + 36) = 0LL;
  }
  CDesktopManager::UnloadTheme(this, v11);
  v21 = (CCompositor *)*((_QWORD *)this + 5);
  if ( v21 )
  {
    CCompositor::Shutdown(v21);
    v22 = (CBaseObject *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v22 )
      CBaseObject::Release(v22);
  }
  v23 = *((_QWORD *)this + 39);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    *((_QWORD *)this + 39) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 94);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 72);
  if ( *v10 )
    wil::details::CloseHandle(*v10, v24);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 13);
  v25 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v25 )
    CBaseObject::Release(v25);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
