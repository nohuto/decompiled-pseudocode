/*
 * XREFs of ZwOpenThreadToken @ 0x18009CB60
 * Callers:
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     RtlAdjustPrivilege @ 0x180078490 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
