/*
 * XREFs of NtOpenFile @ 0x18009D4F0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlpCheckRelativeDrive @ 0x18005DA00 (RtlpCheckRelativeDrive.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x180076E84 (RtlpCreateNewDirectoryReference.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180079A68 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpSysVolTakeOwnership @ 0x180086964 (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D0E3C (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0198 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F7314 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
