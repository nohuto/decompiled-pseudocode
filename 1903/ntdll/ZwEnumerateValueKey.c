/*
 * XREFs of ZwEnumerateValueKey @ 0x18009C940
 * Callers:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     sub_1800FF0C8 @ 0x1800FF0C8 (sub_1800FF0C8.c)
 *     sub_1800FFB04 @ 0x1800FFB04 (sub_1800FFB04.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 19;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
