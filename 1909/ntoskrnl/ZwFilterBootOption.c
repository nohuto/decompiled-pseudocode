/*
 * XREFs of ZwFilterBootOption @ 0x1401C2810
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140296B74 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&FilterOperation);
}
