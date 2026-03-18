/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140153E10
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1404467CC);
  }
}
