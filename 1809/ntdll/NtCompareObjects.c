/*
 * XREFs of NtCompareObjects @ 0x1800A1610
 * Callers:
 *     RtlIsCurrentProcess @ 0x180080A30 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1800FB3B0 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 153;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
