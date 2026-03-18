/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14012293C
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400D0CD4 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140421F98);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140421F90;
      v2 = qword_140421F88 == (_QWORD)&qword_140421F88;
      if ( *(__int64 **)qword_140421F90 != &qword_140421F88 )
        __fastfail(3u);
      *v1 = &qword_140421F88;
      v1[1] = v3;
      *v3 = v1;
      qword_140421F90 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140421F98);
    if ( v2 )
      KeInsertQueueDpc(&stru_140421F48, 0LL, 0LL);
  }
}
