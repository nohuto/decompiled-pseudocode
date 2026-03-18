/*
 * XREFs of KeUpdatePendingQosRequest @ 0x1402AEEA4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KeCheckAndApplyBamQos @ 0x1402AEB40 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B065C (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 236) & 0xC) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      a1 = 0LL;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      LOBYTE(a1) = 1;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  if ( !qword_14044DD58 )
    word_14044DD22 = KiClockTimerOwner + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
}
