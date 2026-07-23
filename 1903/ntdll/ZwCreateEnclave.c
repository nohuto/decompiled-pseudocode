/*
 * XREFs of ZwCreateEnclave @ 0x18009DB50
 * Callers:
 *     LdrCreateEnclave @ 0x1800CD360 (LdrCreateEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  NTSTATUS result; // eax

  result = 164;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
