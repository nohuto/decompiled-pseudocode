/*
 * XREFs of ??1?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18006A628
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x18003CD6F (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$1 @ 0x18003D650 (_SystemCursorController--SystemCursorController_--_1_--dtor$1.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x18006AE31 (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$2 @ 0x18006C0E7 (_DragNDropProcessor--HitTest_--_1_--dtor$2.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$3 @ 0x18006C0F3 (_DragNDropProcessor--HitTest_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$4 @ 0x18006C0FF (_DragNDropProcessor--HitTest_--_1_--dtor$4.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x18006D248 (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x18006D4C2 (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x18006D4CE (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$2 @ 0x1800C2339 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::~ComPtr<BamoDragSourceClientProxy>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(a1);
}
