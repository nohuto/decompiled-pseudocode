/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1408C3680
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140657B3C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1408C265C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
