/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800326F4
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x18013113D (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$1 @ 0x18013367A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18013367A.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$9 @ 0x18013373F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18013373F.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$15 @ 0x1801337D5 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1801337D5.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$17 @ 0x180133807 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180133807.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$4 @ 0x1801348B2 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$4.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18013613A (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_18013613A.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__::_1_::dtor$2 @ 0x1801364A5 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1801364A5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
