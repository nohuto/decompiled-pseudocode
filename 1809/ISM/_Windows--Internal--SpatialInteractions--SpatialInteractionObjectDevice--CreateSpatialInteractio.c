/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevice_::_1_::dtor$4 @ 0x1801339D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevice_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 80));
}
