/*
 * XREFs of NtCompareSigningLevels @ 0x18009E1C0
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x1800833C0 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x18008C170 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareSigningLevels()
{
  __int64 result; // rax

  result = 154LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
