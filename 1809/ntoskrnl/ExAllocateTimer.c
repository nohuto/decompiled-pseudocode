/*
 * XREFs of ExAllocateTimer @ 0x14016B900
 * Callers:
 *     ExpHeapGCInitialization @ 0x1401B7590 (ExpHeapGCInitialization.c)
 *     CreateTlgAggregateSession @ 0x1407431C8 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140743540 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C036C (EtwpUpdatePeriodicCaptureState.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14016B930 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
