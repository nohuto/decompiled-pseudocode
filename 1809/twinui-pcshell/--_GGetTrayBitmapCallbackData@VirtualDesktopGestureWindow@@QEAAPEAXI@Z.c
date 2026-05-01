/*
 * XREFs of ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18038E2D0
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x18038EB60 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x180391370 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *__fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this,
        volatile int *a2)
{
  __int64 v3; // rcx
  void *v4; // rcx

  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3 + 16, a2);
  }
  v4 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    DeleteObject(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
