/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_MagnifierProcessor_MagnifierProcessor__::_1_::dtor$1 @ 0x18013242D
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_MagnifierProcessor_MagnifierProcessor__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 96));
}
