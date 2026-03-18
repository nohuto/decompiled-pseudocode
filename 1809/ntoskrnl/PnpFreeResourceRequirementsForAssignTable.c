/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14072E4F8
 * Callers:
 *     PnpAllocateResources @ 0x1406FADDC (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FB154 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x14083B374 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14083B544 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14083F8C8 (PnpRebalance.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14072E710 (IopFreeReqList.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(*v2);
      *v2 = 0LL;
      if ( (*(_DWORD *)(v2 - 3) & 0x200) != 0 )
      {
        v4 = *(v2 - 1);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
