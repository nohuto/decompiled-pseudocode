/*
 * XREFs of PiSwAllocMem @ 0x140870718
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x14071F2B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiSwAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
}
