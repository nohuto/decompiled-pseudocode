/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140123C88
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x140011DC0 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
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
    KxAcquireSpinLock(&qword_14044D958);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_14044D950;
      v2 = qword_14044D948 == (_QWORD)&qword_14044D948;
      if ( *(__int64 **)qword_14044D950 != &qword_14044D948 )
        __fastfail(3u);
      *v1 = &qword_14044D948;
      v1[1] = v3;
      *v3 = v1;
      qword_14044D950 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_14044D958);
    if ( v2 )
      KeInsertQueueDpc(&stru_14044D908, 0LL, 0LL);
  }
}
