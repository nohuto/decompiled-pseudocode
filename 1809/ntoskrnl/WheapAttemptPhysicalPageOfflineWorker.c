/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x1408DD130
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408DD00C (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = WheapAttemptPhysicalPageOffline(*(UNICODE_STRING **)a1, *(_BYTE *)(a1 + 8), *(_BYTE *)(a1 + 9));
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
