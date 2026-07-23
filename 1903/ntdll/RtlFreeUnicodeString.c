/*
 * XREFs of RtlFreeUnicodeString @ 0x180029BA0
 * Callers:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     RtlEqualDomainName @ 0x18002AE10 (RtlEqualDomainName.c)
 *     sub_180032198 @ 0x180032198 (sub_180032198.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     LdrSetDllDirectory @ 0x18007EF40 (LdrSetDllDirectory.c)
 *     sub_180080B6C @ 0x180080B6C (sub_180080B6C.c)
 *     RtlCreateVirtualAccountSid @ 0x1800829B0 (RtlCreateVirtualAccountSid.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     sub_180088B88 @ 0x180088B88 (sub_180088B88.c)
 *     sub_1800CF794 @ 0x1800CF794 (sub_1800CF794.c)
 *     sub_1800D0D7C @ 0x1800D0D7C (sub_1800D0D7C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 *     sub_1800E1A7C @ 0x1800E1A7C (sub_1800E1A7C.c)
 *     RtlIsNameInExpression @ 0x1800F4E70 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F4F20 (RtlIsNameInUnUpcasedExpression.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

void __stdcall RtlFreeUnicodeString(PUNICODE_STRING UnicodeString)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx

  Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlDeleteBoundaryDescriptor(Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
