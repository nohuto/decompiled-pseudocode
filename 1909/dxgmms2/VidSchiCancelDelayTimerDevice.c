/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1C00C9470
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0010FDC (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a2 + 72);
  for ( i = *(_QWORD **)(a2 + 72); i != v2; i = (_QWORD *)*i )
    VidSchiCancelDelayTimerContext(0LL, (__int64)(i - 3));
}
