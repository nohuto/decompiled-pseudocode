/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x180182770
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x18018455C (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$11 @ 0x180188925 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$11.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$12 @ 0x180188931 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$12.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$13 @ 0x18018893D (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$13.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x180207735 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x180207741 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$1 @ 0x1804248E2 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1804248E2.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$4 @ 0x180424906 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_180424906.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$6 @ 0x180424CD6 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x18042569E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_18042569E.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1804256AE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256AE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1804256BE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256BE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1804256CE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256CE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1804256DE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256DE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1804256EE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256EE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$7 @ 0x1804256FE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804256FE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$8 @ 0x18042570E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_18042570E.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$9 @ 0x18042571E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_18042571E.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
