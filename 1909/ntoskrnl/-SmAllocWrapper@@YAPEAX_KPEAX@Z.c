/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013DAE0
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x14008C23C (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
