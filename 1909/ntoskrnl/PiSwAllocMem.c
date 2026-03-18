/*
 * XREFs of PiSwAllocMem @ 0x14086FE18
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiSwAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
}
