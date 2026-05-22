/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_MPCMouseProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x18003BDD4
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_MPCMouseProcessor_IInputProcessor_InputProcessorCreateParams______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCEyeGazeProcessor::Initialize3DComponents(*(MPCEyeGazeProcessor **)(a2 + 104));
}
