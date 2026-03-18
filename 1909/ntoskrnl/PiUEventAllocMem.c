/*
 * XREFs of PiUEventAllocMem @ 0x1408623B4
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiUEventAllocMem(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x59706E50u);
}
