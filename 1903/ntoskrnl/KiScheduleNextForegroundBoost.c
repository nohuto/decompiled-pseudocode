/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140122B78
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x140011B90 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 1432);
  if ( *(_QWORD *)(a1 + 1432) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_14044DC58);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_14044DC50;
      v2 = qword_14044DC48 == (_QWORD)&qword_14044DC48;
      if ( *(__int64 **)qword_14044DC50 != &qword_14044DC48 )
        __fastfail(3u);
      *v1 = &qword_14044DC48;
      v1[1] = v3;
      *v3 = v1;
      qword_14044DC50 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_14044DC58);
    if ( v2 )
      KeInsertQueueDpc(&stru_14044DC08, 0LL, 0LL);
  }
}
