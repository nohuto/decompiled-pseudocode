/*
 * XREFs of ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180123B04
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801201E8 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x180123F90 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1801245FC (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x180123E44 (-GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ.c)
 */

unsigned int __fastcall Sarm::CStreamResource::CalculateDynamicObjectGrantCount(
        Sarm::CStreamResource *this,
        unsigned int a2)
{
  unsigned int AvailableDynamicObjectCount; // eax

  AvailableDynamicObjectCount = Sarm::CStreamResource::GetAvailableDynamicObjectCount(this);
  return Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, a2, AvailableDynamicObjectCount);
}
