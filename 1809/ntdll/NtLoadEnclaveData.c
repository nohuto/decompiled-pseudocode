/*
 * XREFs of NtLoadEnclaveData @ 0x1800A22F0
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  NTSTATUS result; // eax

  result = 256;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
