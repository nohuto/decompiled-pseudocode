/*
 * XREFs of NtCreateTimer2 @ 0x1800A1AB0
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 190;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
