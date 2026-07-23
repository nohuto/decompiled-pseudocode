/*
 * XREFs of ZwCreateKey @ 0x18009CA80
 * Callers:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_18007330C @ 0x18007330C (sub_18007330C.c)
 *     sub_1800883AC @ 0x1800883AC (sub_1800883AC.c)
 *     RtlpNtCreateKey @ 0x180089530 (RtlpNtCreateKey.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 *     sub_1800E1A7C @ 0x1800E1A7C (sub_1800E1A7C.c)
 *     sub_1800EDA08 @ 0x1800EDA08 (sub_1800EDA08.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  NTSTATUS result; // eax

  result = 29;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
