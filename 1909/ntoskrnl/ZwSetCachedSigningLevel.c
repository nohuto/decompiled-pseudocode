/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401C3CB0
 * Callers:
 *     sub_14091DCAC @ 0x14091DCAC (sub_14091DCAC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
