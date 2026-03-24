/*
 * XREFs of ExFreePool @ 0x14034D780
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     sub_1401AD770 @ 0x1401AD770 (sub_1401AD770.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031F854 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0A0 (RtlUpcaseUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14065AA10 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067BAD0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067BEC0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067C120 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A2BE0 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406CEEC0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D0490 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D3C00 (RtlDuplicateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1406F7030 (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x14070F5F0 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14088FFB0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140890210 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
