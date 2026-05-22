/*
 * XREFs of _MagnifierProcessor::GetDeviceState_::_1_::dtor$11 @ 0x1801051E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

void __fastcall MagnifierProcessor::GetDeviceState_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  MPCEyeGazeProcessor::Initialize3DComponents(*(MPCEyeGazeProcessor **)(a2 + 56));
}
