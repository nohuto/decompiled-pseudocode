/*
 * XREFs of PfSnScenarioAlloc @ 0x1406EB890
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PfSnScenarioAlloc(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x70506343u);
}
