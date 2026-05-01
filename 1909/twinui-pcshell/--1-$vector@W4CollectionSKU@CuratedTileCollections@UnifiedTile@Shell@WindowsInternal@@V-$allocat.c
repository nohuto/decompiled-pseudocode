/*
 * XREFs of ??1?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x180187A50
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$1 @ 0x1801878C0 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_1801878C0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$2 @ 0x1801878D0 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_1801878D0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU_::_1_::dtor$1 @ 0x180188080 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Contai_ea_180188080.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x18018863E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSel_ea_18018863E.c)
 *     _std::_Ref_count_obj_TwinUI::Lighting::AssistantLightStrip_::_Ref_count_obj_TwinUI::Lighting::AssistantLightStrip__Microsoft::WRL::ComPtr_Windows::Devices::Lights::ILampArray__&_std::vector_int_std::allocator_int____&_std::vector_int_std::allocator_int____&__::_1_::dtor$1 @ 0x180420B6E (_std--_Ref_count_obj_TwinUI--Lighting--AssistantLightStrip_--_Ref_count_obj_TwinUI-_ea_180420B6E.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$4 @ 0x180421CB4 (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$4.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$5 @ 0x180421CC0 (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$0 @ 0x180422773 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$1 @ 0x18042277F (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$5 @ 0x1804227B3 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$6 @ 0x1804227C3 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>(
        __int64 a1)
{
  return std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
}
