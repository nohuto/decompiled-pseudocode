/*
 * XREFs of PnprFreeMappingReserve @ 0x14086F508
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     PnprAllocateMappingReserves @ 0x14086EFB4 (PnprAllocateMappingReserves.c)
 * Callees:
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     MmFreeMappingAddress @ 0x140735D70 (MmFreeMappingAddress.c)
 */

void __fastcall PnprFreeMappingReserve(__int64 a1)
{
  struct _MDL *v2; // rcx
  void *v3; // rcx

  v2 = *(struct _MDL **)a1;
  if ( v2 )
  {
    IoFreeMdl(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    MmFreeMappingAddress(v3, 0x51706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)(a1 + 16) = 0;
}
