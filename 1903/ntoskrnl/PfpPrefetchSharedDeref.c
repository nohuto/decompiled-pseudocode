/*
 * XREFs of PfpPrefetchSharedDeref @ 0x140626208
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x140628A98 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408A0E90 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
