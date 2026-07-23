/*
 * XREFs of ZwIsUILanguageComitted @ 0x18009E690
 * Callers:
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800730B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     sub_1800FFDA8 @ 0x1800FFDA8 (sub_1800FFDA8.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwIsUILanguageComitted(void)
{
  NTSTATUS result; // eax

  result = 254;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
