/*
 * XREFs of RaDeleteTagList @ 0x1C006BB6C
 * Callers:
 *     RaidUnitFreeResources @ 0x1C001A4C8 (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaDeleteTagList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 64);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D546152u);
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0x4D546152u);
}
