/*
 * XREFs of CiSchedulerDeepSleep @ 0x1C0002D60
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002FB0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001E30 (CiSchedulerProcessDeadlines.c)
 *     CiLogSchedulerSleep @ 0x1C0003EC4 (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1C0004568 (WPP_SF_.c)
 */

char __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  char result; // al
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_8825f9f1018b3a0c8bc97e34548ca364_Traceguids);
  if ( byte_1C00072E8 )
    CiLogSchedulerSleep(5LL, 0xFFFFFFFFLL);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    CiSchedulerWaitStatus = KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = CiSchedulerProcessDeadlines(&v4);
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
