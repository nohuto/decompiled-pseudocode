/*
 * XREFs of CiSchedulerDeepSleep @ 0x1C0002BF0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002C80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001B30 (CiSchedulerProcessDeadlines.c)
 *     CiLogSchedulerSleep @ 0x1C0003CBC (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1C0004360 (WPP_SF_.c)
 */

bool __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  bool result; // al
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_f6e0feba06a43c1af9cafb3cd5dad623_Traceguids);
  if ( byte_1C00072D8 )
    CiLogSchedulerSleep(5LL, 0xFFFFFFFFLL);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    CiSchedulerWaitStatus = KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = CiSchedulerProcessDeadlines(&v4);
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
