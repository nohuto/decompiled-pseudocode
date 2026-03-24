/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x1408DBE70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408DBD4C (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = WheapAttemptPhysicalPageOffline(*(_QWORD *)a1, *(_BYTE *)(a1 + 8), *(_BYTE *)(a1 + 9));
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
