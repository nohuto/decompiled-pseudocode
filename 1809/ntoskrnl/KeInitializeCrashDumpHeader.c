/*
 * XREFs of KeInitializeCrashDumpHeader @ 0x140282ED0
 * Callers:
 *     <none>
 * Callees:
 *     IoFillDumpHeader @ 0x14027F7C4 (IoFillDumpHeader.c)
 */

NTSTATUS __stdcall KeInitializeCrashDumpHeader(
        ULONG DumpType,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG BufferNeeded)
{
  if ( BufferNeeded )
    *BufferNeeded = 0x2000;
  if ( DumpType != 1 )
    return -1073741585;
  if ( Flags )
    return -1073741584;
  if ( BufferSize < 0x2000 )
    return -1073741582;
  IoFillDumpHeader((_NT_PRODUCT_TYPE *)Buffer, 1, 0, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
  return 0;
}
