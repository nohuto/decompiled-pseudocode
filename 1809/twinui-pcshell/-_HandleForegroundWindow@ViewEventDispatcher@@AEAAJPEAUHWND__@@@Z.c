/*
 * XREFs of ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021EDB8
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180216320 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180243D10 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180220AC8 (-_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleForegroundWindow(
        struct IViewWrapperInternal **this,
        struct IViewWrapperInternal *a2)
{
  struct IViewWrapperInternal *v4; // r8
  struct IViewWrapperInternal *v5; // rcx
  struct IViewWrapperInternal *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    ViewEventDispatcher::_ViewFromFrameOrWindow((ViewEventDispatcher *)this, (HWND)a2, &v7);
  }
  v4 = this[40];
  v5 = v7;
  if ( v4 != v7 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v4 + 832LL))(this[40], 0LL);
      v5 = v7;
    }
    if ( v5 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v5 + 832LL))(v5, 1LL);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 40, (__int64 *)&v7);
  this[39] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
