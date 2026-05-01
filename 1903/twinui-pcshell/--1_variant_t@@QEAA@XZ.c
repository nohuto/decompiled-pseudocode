/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x18016341C
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180166614 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801E70B4 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$3 @ 0x1804052CA (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1804052CA.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$4 @ 0x18040568E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue_::_1_::dtor$0 @ 0x180405966 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetBoolAttributeValue_--_1_--dtor$.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue_::_1_::dtor$1 @ 0x180405A9F (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetStringAttributeValue_--_1_--dto.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue_::_1_::dtor$0 @ 0x180405C77 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetUintAttributeValue_--_1_--dtor$.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180104BE4 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
