/*
 * XREFs of CMFAllocFn @ 0x1408D83E0
 * Callers:
 *     XpressDecodeCreate @ 0x14032C91C (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
