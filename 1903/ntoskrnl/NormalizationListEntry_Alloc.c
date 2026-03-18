/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14031AF44
 * Callers:
 *     RtlpGetNormalization @ 0x1408D9070 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
