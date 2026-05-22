/*
 * XREFs of ?ThrottleGestureNotification@MagnifierClientProxy@@AEAA_NIAEBUtagPOINT@@@Z @ 0x18006FAB4
 * Callers:
 *     ?PanGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x18006F9B0 (-PanGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 *     ?ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x18006FF30 (-ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MagnifierClientProxy::ThrottleGestureNotification(
        MagnifierClientProxy *this,
        int a2,
        const struct tagPOINT *a3)
{
  return a2 == 1 && (!*((_BYTE *)this + 64) || a3->x == *((_DWORD *)this + 17) && a3->y == *((_DWORD *)this + 18));
}
