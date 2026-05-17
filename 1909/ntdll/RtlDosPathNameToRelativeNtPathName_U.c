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

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
