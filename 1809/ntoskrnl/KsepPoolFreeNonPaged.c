/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1400F535C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1406808FC (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_14041AB6C);
  }
}
