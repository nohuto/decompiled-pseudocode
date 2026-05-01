/*
 * XREFs of ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z @ 0x1803F4644
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x1803F4348 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x1803F317C (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureWindow::Commit(
        VirtualDesktopGestureWindow *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        float a3)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-60h]
  struct IVirtualDesktopGestureHandlerPrivate *v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11[1] = -2LL;
  v11[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
  v11[2] = (__int64)&v10;
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v12[0] = (int)(float)((float)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42)) * a3);
  v12[1] = 0;
  v12[2] = v12[0] + 1;
  v12[3] = 1;
  v6 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
         *((_QWORD *)this + 20),
         (int)v12,
         v5,
         (__int64 *)&v10,
         v9);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v6);
  if ( a2 )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return v7;
}
