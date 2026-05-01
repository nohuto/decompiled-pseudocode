/*
 * XREFs of ?_Free@_bstr_t@@AEAAXXZ @ 0x18013C524
 * Callers:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180138608 (--1_bstr_t@@QEAA@XZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18013A2E8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18013DE98 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1801A127C (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x18039FA94 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1803A0AC4 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 *     ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x1803A0B70 (--_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@Data_t@_bstr_t@@QEAAKXZ @ 0x18013B0F8 (-Release@Data_t@_bstr_t@@QEAAKXZ.c)
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
