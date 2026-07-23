/*
 * XREFs of ZwQueryAttributesFile @ 0x18009CE80
 * Callers:
 *     sub_180025E00 @ 0x180025E00 (sub_180025E00.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
