/*
 * XREFs of ExAllocateTimer @ 0x14016BA20
 * Callers:
 *     ExpHeapGCInitialization @ 0x1401B7710 (ExpHeapGCInitialization.c)
 *     CreateTlgAggregateSession @ 0x140744398 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140744710 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14016BA50 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
