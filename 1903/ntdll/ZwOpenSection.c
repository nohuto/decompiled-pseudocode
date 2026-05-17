/*
 * XREFs of ZwOpenSection @ 0x18009CDC0
 * Callers:
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800832E0 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSection()
{
  __int64 result; // rax

  result = 55LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
