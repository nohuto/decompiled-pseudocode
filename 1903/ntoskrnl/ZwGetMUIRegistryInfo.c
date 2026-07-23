/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x1401C1EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
