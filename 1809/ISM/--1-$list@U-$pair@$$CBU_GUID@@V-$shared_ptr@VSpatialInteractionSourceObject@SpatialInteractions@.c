/*
 * XREFs of ??1?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800BC1C8
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::SpatialInteractionHandObjectDevice_::_1_::dtor$17 @ 0x180133A58 (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--Spatia_ea_180133A58.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800BC364 (-clear@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

void __fastcall std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::~list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>(
        void **a1)
{
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear(a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x30);
}
