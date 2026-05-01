/*
 * XREFs of ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x1803F4100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1803F3B2C (--1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x1803F4088 (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
VirtualDesktopGestureHandler *__fastcall VirtualDesktopGestureHandler::`scalar deleting destructor'(
        VirtualDesktopGestureHandler *this,
        char a2)
{
  VirtualDesktopGestureContext *v4; // rcx

  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity((VirtualDesktopGestureHandler *)((char *)this + 72));
  v4 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    VirtualDesktopGestureContext::`scalar deleting destructor'(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
