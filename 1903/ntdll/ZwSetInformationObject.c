/*
 * XREFs of ZwSetInformationObject @ 0x18009D250
 * Callers:
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     sub_18007E820 @ 0x18007E820 (sub_18007E820.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 92;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
