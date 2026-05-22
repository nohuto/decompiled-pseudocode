/*
 * XREFs of _SpatialRimDeviceCollection::Initialize_::_1_::dtor$2 @ 0x180131201
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall SpatialRimDeviceCollection::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 248));
}
