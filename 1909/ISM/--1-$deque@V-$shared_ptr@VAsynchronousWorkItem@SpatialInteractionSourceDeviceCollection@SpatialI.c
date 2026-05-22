/*
 * XREFs of ??1?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1800E0658
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$18 @ 0x18003C010 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18003C010.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800E69EC (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 */

void __fastcall std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::~deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>(
        void **a1)
{
  std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
