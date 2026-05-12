/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C001E920
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0016638 (RaidResumeAdapterQueue.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001EA78 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq @ 0x1C0039A78 (McTemplateK0pqq.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r8
  int v6; // ecx
  int v7; // r8d
  KIRQL v8; // bl

  if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
    McTemplateK0pqq(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      a3,
      **(_QWORD **)(a1 + 5024),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
  {
    LOBYTE(v5) = 1;
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, v5);
  }
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v8 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1);
    KeLowerIrql(v8);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0061741 & 1) != 0 )
      McTemplateK0pqq(
        v6,
        (unsigned int)&EventAdapterActiveConditionStop,
        v7,
        **(_QWORD **)(a1 + 5024),
        *(_DWORD *)(a1 + 56),
        a2);
  }
}
