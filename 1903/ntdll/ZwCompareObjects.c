/*
 * XREFs of ZwCompareObjects @ 0x18009D9F0
 * Callers:
 *     RtlIsCurrentThread @ 0x180002710 (RtlIsCurrentThread.c)
 *     RtlIsCurrentProcess @ 0x180072320 (RtlIsCurrentProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 153;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
