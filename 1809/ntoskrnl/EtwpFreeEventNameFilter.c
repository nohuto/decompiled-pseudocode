/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1408C23E0
 * Callers:
 *     EtwpFreeFilterInfo @ 0x14065699C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140657034 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1408C13BC (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
