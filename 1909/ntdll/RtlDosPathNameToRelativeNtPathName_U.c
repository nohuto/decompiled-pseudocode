/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180029320
 * Callers:
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpResMapFile @ 0x1800E2764 (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           2,
           DosFileName,
           (int)NtFileName,
           (__int64)FilePart,
           (__int64)RelativeName) >= 0;
}
