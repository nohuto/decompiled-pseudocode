/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x140664C24
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchMetadata @ 0x14065FE9C (PfSnPrefetchMetadata.c)
 *     PfSnPrefetchSections @ 0x140664110 (PfSnPrefetchSections.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, __int64 *a2, int a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9

  PfSnPrefetchMetadata((__int64)a2, a3);
  result = PfSnPrefetchSections(a2, CriticalWorkQueue, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(a2, DelayedWorkQueue, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}
