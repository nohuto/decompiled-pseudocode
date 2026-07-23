/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A35D0
 * Callers:
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18002B260 (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  NTSTATUS result; // eax

  result = 407;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
