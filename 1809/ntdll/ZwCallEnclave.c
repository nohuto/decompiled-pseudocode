/*
 * XREFs of ZwCallEnclave @ 0x1800A14D0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A4160 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A41D0 (RtlCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  NTSTATUS result; // eax

  result = 143;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
