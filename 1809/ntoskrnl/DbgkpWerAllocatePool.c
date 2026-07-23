/*
 * XREFs of DbgkpWerAllocatePool @ 0x1408138E4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14026E15C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
