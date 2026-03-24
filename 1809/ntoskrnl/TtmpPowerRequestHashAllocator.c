/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x140880F0C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140880B98 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
