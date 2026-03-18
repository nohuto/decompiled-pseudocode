/*
 * XREFs of MiDeletePxeSharedLocks @ 0x1401B57B4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePxeSharedLocks(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 552);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
