/*
 * XREFs of MiDeleteWorkingSetList @ 0x1400AD800
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140166510 (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
