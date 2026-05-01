/*
 * XREFs of ??_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z @ 0x1803F4198
 * Callers:
 *     ??_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z @ 0x1800C15A0 (--_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x1803F3A9C (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 */

VirtualDesktopGestureWindow *__fastcall VirtualDesktopGestureWindow::`vector deleting destructor'(
        VirtualDesktopGestureWindow *this,
        char a2)
{
  VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
