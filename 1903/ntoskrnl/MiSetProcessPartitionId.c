/*
 * XREFs of MiSetProcessPartitionId @ 0x1400E3DB8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1454) = a2;
}
