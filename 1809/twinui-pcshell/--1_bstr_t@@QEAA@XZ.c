/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x180138608
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x18013A3DC (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18013E147 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18013E173 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$7 @ 0x18013E19F (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$7.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x1801A14F9 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x1801A1505 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$1 @ 0x18039FC9D (_StartLayout--AddSchemaToCollection_--_1_--dtor$1.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$4 @ 0x18039FCC1 (_StartLayout--AddSchemaToCollection_--_1_--dtor$4.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$6 @ 0x1803A0089 (_StartLayout--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1803A0A5B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1803A0A6B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1803A0A7B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1803A0A8B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1803A0A9B (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$5.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1803A0AAB (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
