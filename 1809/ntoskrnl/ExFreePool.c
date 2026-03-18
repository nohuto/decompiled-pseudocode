/*
 * XREFs of ExFreePool @ 0x14034D780
 * Callers:
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     sub_1401AD750 @ 0x1401AD750 (sub_1401AD750.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031F754 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0C0 (RtlUpcaseUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14065AA30 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067BAF0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067BEE0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067C140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A2C00 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406CEEE0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D04B0 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D3C20 (RtlDuplicateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1406F7050 (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x14070F610 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14088FFD0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140890230 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
