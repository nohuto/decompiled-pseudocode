/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1402FC7F4
 * Callers:
 *     RtlpGetNormalization @ 0x14089B764 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
