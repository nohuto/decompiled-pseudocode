/*
 * XREFs of CMFAllocFn @ 0x14091561C
 * Callers:
 *     XpressDecodeCreate @ 0x14034E2C8 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
