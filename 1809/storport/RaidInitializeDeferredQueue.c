/*
 * XREFs of RaidInitializeDeferredQueue @ 0x1C001BC38
 * Callers:
 *     RaidAdapterInitializeWmi @ 0x1C001B760 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterConfigureResources @ 0x1C001BAEC (RaidAdapterConfigureResources.c)
 * Callees:
 *     RaidAdjustDeferredQueueDepth @ 0x1C001BC8C (RaidAdjustDeferredQueueDepth.c)
 */

__int64 __fastcall RaidInitializeDeferredQueue(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)RaidDeferredQueueDpcRoutine, a2);
  return RaidAdjustDeferredQueueDepth(a1);
}
