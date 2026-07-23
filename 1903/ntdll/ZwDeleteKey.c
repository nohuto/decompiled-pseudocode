/*
 * XREFs of ZwDeleteKey @ 0x18009E0B0
 * Callers:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x180100F80 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 207;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
