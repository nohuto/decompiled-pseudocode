/*
 * XREFs of NtDeleteKey @ 0x1800A1C90
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079268 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180082D84 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E48E8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x180103890 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 NtDeleteKey()
{
  __int64 result; // rax

  result = 206LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
