/*
 * XREFs of ZwWriteVirtualMemory @ 0x18009CE20
 * Callers:
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 *     sub_1801134A0 @ 0x1801134A0 (sub_1801134A0.c)
 *     sub_180113A08 @ 0x180113A08 (sub_180113A08.c)
 * Callees:
 *     <none>
 */

__int64 ZwWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
