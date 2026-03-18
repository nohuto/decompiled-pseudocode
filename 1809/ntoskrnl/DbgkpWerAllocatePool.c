/*
 * XREFs of DbgkpWerAllocatePool @ 0x140812704
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14026DE6C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
