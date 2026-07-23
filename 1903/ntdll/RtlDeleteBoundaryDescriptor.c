/*
 * XREFs of RtlDeleteBoundaryDescriptor @ 0x18006D6E0
 * Callers:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     sub_180029974 @ 0x180029974 (sub_180029974.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061B30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x180061C20 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180061CE0 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180062330 (RtlUnicodeStringToAnsiString.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 *     RtlDowncaseUnicodeString @ 0x180070A30 (RtlDowncaseUnicodeString.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     RtlDuplicateUnicodeString @ 0x180077A90 (RtlDuplicateUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     RtlFreeOemString @ 0x180089B00 (RtlFreeOemString.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDB00 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E89F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8B20 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8C30 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlDeleteBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BoundaryDescriptor);
}
