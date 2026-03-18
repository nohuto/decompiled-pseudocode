/*
 * XREFs of DbgkpWerAllocatePool @ 0x14084B834
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1402817C8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
