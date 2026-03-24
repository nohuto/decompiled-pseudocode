/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x140880F30
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140880B98 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
