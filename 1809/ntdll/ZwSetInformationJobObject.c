/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A34F0
 * Callers:
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 400;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
