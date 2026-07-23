/*
 * XREFs of sub_18006D6B8 @ 0x18006D6B8
 * Callers:
 *     sub_180003C3C @ 0x180003C3C (sub_180003C3C.c)
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     sub_180029974 @ 0x180029974 (sub_180029974.c)
 *     sub_180029E90 @ 0x180029E90 (sub_180029E90.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061B30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x180061C20 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180061CE0 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180062330 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x18006A260 (RtlStringFromGUIDEx.c)
 *     RtlDowncaseUnicodeString @ 0x180070A30 (RtlDowncaseUnicodeString.c)
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     RtlDuplicateUnicodeString @ 0x180077A90 (RtlDuplicateUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D59C0 (RtlComputePrivatizedDllName_U.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDB00 (LdrUpdatePackageSearchPath.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E89F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8B20 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8C30 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_18006D6B8(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
