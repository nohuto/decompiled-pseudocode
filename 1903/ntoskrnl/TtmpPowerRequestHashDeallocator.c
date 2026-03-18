/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408BECC8
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408BE974 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
