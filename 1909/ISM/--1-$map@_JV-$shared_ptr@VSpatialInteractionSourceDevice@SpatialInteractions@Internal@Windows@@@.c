/*
 * XREFs of ??1?$map@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E06EC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x18003BFDE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18003BFDE.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800CAC20 (-clear@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 */

void __fastcall std::map<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>::~map<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::clear(a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
