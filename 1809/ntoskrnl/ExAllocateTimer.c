/*
 * XREFs of ExAllocateTimer @ 0x14016B920
 * Callers:
 *     ExpHeapGCInitialization @ 0x1401B75B0 (ExpHeapGCInitialization.c)
 *     CreateTlgAggregateSession @ 0x1407431A8 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140743520 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14016B950 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
