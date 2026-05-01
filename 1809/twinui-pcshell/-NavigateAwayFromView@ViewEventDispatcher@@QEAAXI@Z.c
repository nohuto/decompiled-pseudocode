/*
 * XREFs of ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x180215E34
 * Callers:
 *     ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x180232E20 (-OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180220348 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::NavigateAwayFromView(RTL_SRWLOCK *this, unsigned int a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rcx
  struct IViewWrapperInternal *v7; // [rsp+60h] [rbp+30h] BYREF
  __int64 v8; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v9; // [rsp+78h] [rbp+48h] BYREF

  v7 = 0LL;
  v4 = 0LL;
  v8 = 0LL;
  v5 = this + 37;
  AcquireSRWLockShared(this + 37);
  v9 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v7) >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v7, &v8);
    v4 = v8;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  if ( v4 )
  {
    v6 = *(RTL_SRWLOCK **)(v4 + 32);
    v9 = v6;
    if ( v6 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 1))(v6);
    ViewEventDispatcher::_RaiseViewEvent(this, v7, 3LL, &v9, -2LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
}
