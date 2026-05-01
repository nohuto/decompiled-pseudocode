/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x1800E2538
 * Callers:
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180138270 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180138350 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x1801383CC (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x180138568 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x180138614 (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x18013B5B4 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x18019F200 (--_EPWSLayoutPolicyManager@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1801A0094 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x18039FA94 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1803A0228 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1803A0258 (-GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1803A0358 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x1803A0490 (-GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1803A0AC4 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    24LL,
    (__int64)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1);
  JUMPOUT(0x1800E2555LL);
}
