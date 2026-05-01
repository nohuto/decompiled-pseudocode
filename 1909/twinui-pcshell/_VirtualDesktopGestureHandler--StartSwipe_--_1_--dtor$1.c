/*
 * XREFs of _VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor$1 @ 0x180415D18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VirtualDesktopGestureContext *__fastcall VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::~unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>(
           (VirtualDesktopGestureContext **)(a2 + 64),
           a2);
}
