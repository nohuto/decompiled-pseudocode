/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x140880F50
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
