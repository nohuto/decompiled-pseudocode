/*
 * XREFs of NtCreateSemaphore @ 0x18009E5E0
 * Callers:
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  NTSTATUS result; // eax

  result = 187;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
