/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x1407522D4
 * Callers:
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140721DD0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140876660 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14087B2EC (PnpRebalance.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x1407524F0 (IopFreeReqList.c)
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
