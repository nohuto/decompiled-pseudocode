/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1408BECA4
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408BE974 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
