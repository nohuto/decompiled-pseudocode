/*
 * XREFs of ZwCreateFile @ 0x1800A0D80
 * Callers:
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x180051BEC (EtwpCreateFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008CD10 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008E950 (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800ED9E0 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180114E54 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180114F78 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1801150C4 (RtlpQueryDiskSpacePolicy.c)
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
