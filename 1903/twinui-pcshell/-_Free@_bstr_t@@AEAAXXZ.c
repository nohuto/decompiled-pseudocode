/*
 * XREFs of ?_Free@_bstr_t@@AEAAXXZ @ 0x180167534
 * Callers:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180163410 (--1_bstr_t@@QEAA@XZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1801650E8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1801692C0 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1801E8278 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804050A0 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180405408 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180406104 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 *     ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x1804061B0 (--_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@Data_t@_bstr_t@@QEAAKXZ @ 0x180165ED0 (-Release@Data_t@_bstr_t@@QEAAKXZ.c)
 */

void __fastcall _bstr_t::_Free(_bstr_t::Data_t **this, const struct std::nothrow_t *a2)
{
  _bstr_t::Data_t *v3; // rcx

  v3 = *this;
  if ( v3 )
  {
    _bstr_t::Data_t::Release(v3, a2);
    *this = 0LL;
  }
}
