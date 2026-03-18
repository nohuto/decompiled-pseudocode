/*
 * XREFs of PfpPrefetchSharedDeref @ 0x14065CA24
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065B9BC (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406601AC (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140864630 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
