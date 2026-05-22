/*
 * XREFs of ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x18010B3A4
 * Callers:
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x18010B088 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x18010B814 (-RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z.c)
 *     ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x18010CDF0 (-GetInteresting@TwoFingerGestureRecognizer@@UEAA-AW4GestureType@@XZ.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18010DA04 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x18010DC00 (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::MeetsThreshold(GestureRecognizer *this, const struct tagPOINT *a2, unsigned int a3)
{
  return abs32(a2->x) >= a3 || abs32(a2->y) >= a3;
}
