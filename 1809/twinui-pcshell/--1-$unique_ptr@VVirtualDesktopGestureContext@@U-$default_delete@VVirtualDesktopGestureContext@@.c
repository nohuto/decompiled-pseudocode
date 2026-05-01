/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x18038DD38
 * Callers:
 *     _VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor$1 @ 0x180390841 (_VirtualDesktopGestureHandler--StartSwipe_--_1_--dtor$1.c)
 * Callees:
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18038E338 (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::~unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>(
        VirtualDesktopGestureContext **a1,
        unsigned int a2)
{
  VirtualDesktopGestureContext *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return VirtualDesktopGestureContext::`scalar deleting destructor'(v2, a2);
  return result;
}
