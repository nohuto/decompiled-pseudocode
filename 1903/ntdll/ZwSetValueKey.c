/*
 * XREFs of ZwSetValueKey @ 0x18009D2D0
 * Callers:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     RtlpNtSetValueKey @ 0x180089570 (RtlpNtSetValueKey.c)
 *     RtlApplyRXact @ 0x1800895E0 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 *     RtlWriteRegistryValue @ 0x18008B160 (RtlWriteRegistryValue.c)
 *     sub_1800D4A28 @ 0x1800D4A28 (sub_1800D4A28.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800EDA08 @ 0x1800EDA08 (sub_1800EDA08.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
