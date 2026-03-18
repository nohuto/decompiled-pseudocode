/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x140011B90
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140122B78 (KiScheduleNextForegroundBoost.c)
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  LOBYTE(v1) = KiForegrounBoostVelocityFlag;
  if ( !KiForegrounBoostVelocityFlag )
  {
    LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL);
    if ( (_BYTE)v1 == 2 )
    {
      v2 = *(_BYTE *)(a1 + 195);
      if ( v2 < 16 )
      {
        v1 = *(_DWORD *)(a1 + 120);
        if ( (v1 & 8) == 0 && v2 > 0 )
          LOBYTE(v1) = KiScheduleNextForegroundBoost();
      }
    }
  }
  return v1;
}
