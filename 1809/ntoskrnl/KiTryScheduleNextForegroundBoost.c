/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x1400D0D74
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140122A2C (KiScheduleNextForegroundBoost.c)
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL);
  if ( (_BYTE)v1 == 2 )
  {
    v2 = *(_BYTE *)(a1 + 195);
    if ( v2 < 16 )
    {
      v1 = *(_DWORD *)(a1 + 120);
      if ( (v1 & 8) == 0 && v2 > 0 )
        LOBYTE(v1) = KiScheduleNextForegroundBoost(a1);
    }
  }
  return v1;
}
