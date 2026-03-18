/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1408FF5B8
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140664BB4 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x14066524C (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1408FE5E0 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
