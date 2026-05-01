/*
 * XREFs of ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802744A8
 * Callers:
 *     ?HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z @ 0x18026C260 (-HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x18026CB30 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180275E60 (-_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
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
  v4 = this[38];
  v5 = v7;
  if ( v4 != v7 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v4 + 840LL))(this[38], 0LL);
      v5 = v7;
    }
    if ( v5 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v5 + 840LL))(v5, 1LL);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 38, (__int64 *)&v7);
  this[37] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
