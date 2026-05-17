/*
 * XREFs of NtEnumerateKey @ 0x1800A0920
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007948C (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x180084540 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801026E8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180103698 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
