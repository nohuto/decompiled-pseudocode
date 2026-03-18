/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013BA60
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
