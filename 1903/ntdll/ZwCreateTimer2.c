/*
 * XREFs of ZwCreateTimer2 @ 0x18009DEB0
 * Callers:
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 191;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
