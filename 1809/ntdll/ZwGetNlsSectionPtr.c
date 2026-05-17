/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A2130
 * Callers:
 *     RtlpGetNormalization @ 0x180083E44 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 243LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
