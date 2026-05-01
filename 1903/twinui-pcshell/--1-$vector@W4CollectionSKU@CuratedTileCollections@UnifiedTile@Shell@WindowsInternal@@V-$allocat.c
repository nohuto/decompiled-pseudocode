/*
 * XREFs of ??1?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x1801686C0
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$1 @ 0x180168530 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_180168530.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$2 @ 0x180168540 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_180168540.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU_::_1_::dtor$1 @ 0x180168CF0 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Contai_ea_180168CF0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x1801692AE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSel_ea_1801692AE.c)
 *     _std::_Ref_count_obj_TwinUI::Lighting::AssistantLightStrip_::_Ref_count_obj_TwinUI::Lighting::AssistantLightStrip__Microsoft::WRL::ComPtr_Windows::Devices::Lights::ILampArray__&_std::vector_int_std::allocator_int____&_std::vector_int_std::allocator_int____&__::_1_::dtor$1 @ 0x18040153E (_std--_Ref_count_obj_TwinUI--Lighting--AssistantLightStrip_--_Ref_count_obj_TwinUI-_ea_18040153E.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$4 @ 0x180402684 (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$4.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$5 @ 0x180402690 (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$0 @ 0x180403143 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$1 @ 0x18040314F (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$5 @ 0x180403183 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$6 @ 0x180403193 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>(
        __int64 a1)
{
  return std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
}
