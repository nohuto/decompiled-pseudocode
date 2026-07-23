/*
 * XREFs of ZwEnumerateKey @ 0x18009CD20
 * Callers:
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     RtlpNtEnumerateSubKey @ 0x18007F700 (RtlpNtEnumerateSubKey.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 *     sub_180100D94 @ 0x180100D94 (sub_180100D94.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 50;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
