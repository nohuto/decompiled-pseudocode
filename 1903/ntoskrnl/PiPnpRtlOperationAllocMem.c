/*
 * XREFs of PiPnpRtlOperationAllocMem @ 0x140863BAC
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiPnpRtlOperationAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x41706E50u);
}
