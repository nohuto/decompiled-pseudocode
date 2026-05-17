/*
 * XREFs of NtCompareSigningLevels @ 0x1800A1610
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180086FE0 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x18008F4D0 (LdrpSetModuleSigningLevel.c)
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
