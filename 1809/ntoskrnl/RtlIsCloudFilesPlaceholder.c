/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x1402F4D90
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1401B33B4 (CmpAdjustFileCFSafety.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsCloudFilesPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x400) != 0 && (ReparseTag & 0xFFFF0FFF) == 0x9000001A;
}
