/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_MagnifierProcessor::DeviceState_MagnifierProcessor::DeviceState__::_1_::dtor$1 @ 0x18013422E
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_MagnifierProcessor::DeviceState_MagnifierProcessor::DeviceState__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 112));
}
