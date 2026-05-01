/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x180123BF4
 * Callers:
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x1801822E8 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1801824F0 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18018256C (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801826D0 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x18018277C (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801857C4 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180205430 (--_EPWSLayoutPolicyManager@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1802061C4 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804246D0 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180424A38 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x180424E78 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180424EA8 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180424FA8 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x1804251CC (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180425734 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    28LL,
    (__int64)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1);
  JUMPOUT(0x180123C11LL);
}
