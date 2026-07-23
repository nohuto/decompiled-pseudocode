/*
 * XREFs of ExFreePool @ 0x14034E780
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     sub_1401AD8B0 @ 0x1401AD8B0 (sub_1401AD8B0.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031FA44 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067D080 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A3E80 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406D0160 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D1730 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1406F82D0 (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x140710890 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140891210 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140891470 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
