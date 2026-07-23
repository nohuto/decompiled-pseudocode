/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140122A2C
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400D0D74 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140423078);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140423070;
      v2 = qword_140423068 == (_QWORD)&qword_140423068;
      if ( *(__int64 **)qword_140423070 != &qword_140423068 )
        __fastfail(3u);
      *v1 = &qword_140423068;
      v1[1] = v3;
      *v3 = v1;
      qword_140423070 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140423078);
    if ( v2 )
      KeInsertQueueDpc(&stru_140423028, 0LL, 0LL);
  }
}
