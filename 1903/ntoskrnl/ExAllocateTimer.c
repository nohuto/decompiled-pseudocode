/*
 * XREFs of ExAllocateTimer @ 0x140176220
 * Callers:
 *     CreateTlgAggregateSession @ 0x14074ECE4 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x14076B480 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     ExpInitSystemPhase1 @ 0x140A038D0 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140176250 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
