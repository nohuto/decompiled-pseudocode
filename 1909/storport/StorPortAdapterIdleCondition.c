/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C001F830
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaidPauseAdapterQueue @ 0x1C0017260 (RaidPauseAdapterQueue.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F8C8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq @ 0x1C003AE68 (McTemplateK0pqq.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d

  if ( StorEtwLoggingEnabled && (byte_1C0062741 & 1) != 0 )
    McTemplateK0pqq(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 5024),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5024), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0062741 & 1) != 0 )
      return McTemplateK0pqq(
               v6,
               (unsigned int)&EventAdapterIdleConditionStop,
               v7,
               **(_QWORD **)(a1 + 5024),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
