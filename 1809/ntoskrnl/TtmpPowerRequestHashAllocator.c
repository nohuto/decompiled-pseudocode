/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x140880F2C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
