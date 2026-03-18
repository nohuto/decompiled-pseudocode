/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1401544B0
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x14070B914 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1404464EC);
  }
}
