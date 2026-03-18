/*
 * XREFs of MiEnumerateSlabAllocators @ 0x1402DB63C
 * Callers:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 *     MiFreeSlabPage @ 0x1402DBD54 (MiFreeSlabPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1402DC160 (MiGetSlabAllocatorStandbyList.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3CE28 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiEnumerateSlabAllocators(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64, unsigned __int64, __int64),
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi

  v3 = a1 + 6136;
  v5 = a1 + 7096;
  while ( 1 )
  {
    if ( v3 >= v5 )
      return 0LL;
    if ( a2(a1, v3, a3) )
      break;
    v3 += 120LL;
  }
  return 1LL;
}
