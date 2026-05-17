/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180034930
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A184 (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, int a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
