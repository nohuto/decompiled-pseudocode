/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x14088216C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140881DF8 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
