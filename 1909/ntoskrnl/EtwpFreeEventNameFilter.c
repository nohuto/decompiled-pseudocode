/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1408FEF0C
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140691FC8 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140692660 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1408FDF38 (EtwpAllocateEventNameFilter.c)
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
