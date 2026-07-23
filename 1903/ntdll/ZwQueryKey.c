/*
 * XREFs of ZwQueryKey @ 0x18009C9A0
 * Callers:
 *     sub_180003CF8 @ 0x180003CF8 (sub_180003CF8.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 22;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
