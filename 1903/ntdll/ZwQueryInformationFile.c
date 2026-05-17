/*
 * XREFs of ZwQueryInformationFile @ 0x18009C900
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800E2500 @ 0x1800E2500 (sub_1800E2500.c)
 *     sub_1800E31E0 @ 0x1800E31E0 (sub_1800E31E0.c)
 *     sub_1800F6E14 @ 0x1800F6E14 (sub_1800F6E14.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800F8E30 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
