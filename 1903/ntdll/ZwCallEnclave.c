/*
 * XREFs of ZwCallEnclave @ 0x18009D8B0
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x1800A0560 (RtlEnclaveCallDispatch.c)
 *     sub_1800A05D0 @ 0x1800A05D0 (sub_1800A05D0.c)
 *     LdrCallEnclave_0 @ 0x1800CDFC0 (LdrCallEnclave_0.c)
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
