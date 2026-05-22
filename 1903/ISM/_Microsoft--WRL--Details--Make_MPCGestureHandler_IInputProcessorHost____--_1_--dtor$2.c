/*
 * XREFs of _Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost____::_1_::dtor$2 @ 0x180084EB1
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  MPCEyeGazeProcessor::Initialize3DComponents(*(MPCEyeGazeProcessor **)(a2 + 48));
}
