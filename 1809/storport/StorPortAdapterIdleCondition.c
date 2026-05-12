/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C0021360
 * Callers:
 *     <none>
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C00213F8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq @ 0x1C003D8DC (McTemplateK0pqq.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d

  if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
    McTemplateK0pqq(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 5152),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5152) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5152), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E2 & 0x10) != 0 )
      return McTemplateK0pqq(
               v6,
               (unsigned int)&EventAdapterIdleConditionStop,
               v7,
               **(_QWORD **)(a1 + 5152),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
