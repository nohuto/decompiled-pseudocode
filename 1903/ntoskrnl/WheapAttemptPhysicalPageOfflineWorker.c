/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x14091A090
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140919F1C (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = WheapAttemptPhysicalPageOffline(
                           *(LARGE_INTEGER *)a1,
                           *(UNICODE_STRING **)(a1 + 8),
                           *(_BYTE *)(a1 + 16),
                           *(_BYTE *)(a1 + 17),
                           *(_BYTE *)(a1 + 18));
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
