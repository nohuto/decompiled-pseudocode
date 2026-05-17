/*
 * XREFs of ZwCreateFile @ 0x18009D930
 * Callers:
 *     EtwpCreateFile @ 0x180005268 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086CB0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008C6D8 (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E2764 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EABD0 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x1801141E8 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18011430C (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180114458 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
