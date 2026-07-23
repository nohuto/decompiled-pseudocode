/*
 * XREFs of ZwDeleteValueKey @ 0x18009E8C0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180003474 (RtlpQueryRegistryValues.c)
 *     RtlApplyRXact @ 0x180089C80 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008AAC0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008C010 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 210;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
