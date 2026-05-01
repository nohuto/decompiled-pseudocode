/*
 * XREFs of ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18028BB28
 * Callers:
 *     ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x1802A7690 (-OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180294C4C (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::NavigateAwayFromView(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  struct IViewWrapperInternal *v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v8; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v4 = this + 35;
  AcquireSRWLockShared(this + 35);
  v8 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v6) >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v6, &v7);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v7 )
  {
    v5 = *(RTL_SRWLOCK **)(v7 + 32);
    v8 = v5;
    if ( v5 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
    ViewEventDispatcher::_RaiseViewEvent(this, v6, 3LL, &v8, -2LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
