/*
 * XREFs of ZwDeleteValueKey @ 0x18009E110
 * Callers:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     RtlApplyRXact @ 0x1800895E0 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008B970 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
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
