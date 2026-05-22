/*
 * XREFs of ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x18010C5F4
 * Callers:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x18010C3CC (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18010D22C (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D348 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010DD58 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010DE4C (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::ExceedsThreshold(
        GestureRecognizer *this,
        const struct tagPOINT *a2,
        unsigned int a3,
        unsigned int a4)
{
  bool result; // al

  if ( abs32(a2->x) > a3 )
    return 1;
  if ( abs32(a2->y) > a4 )
    return 1;
  result = 0;
  if ( !a3 || !a4 )
    return 1;
  return result;
}
