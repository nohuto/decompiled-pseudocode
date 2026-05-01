/*
 * XREFs of ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18021D46C
 * Callers:
 *     ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x180232840 (-OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x180233F20 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::ViewOperationRequestComplete(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rsi
  struct IViewWrapperInternal *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v8 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, &v10);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v10 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v10 + 808LL))(v10, a3, a4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
