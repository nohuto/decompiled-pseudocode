/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x14012F760
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140613848 (PspGetNextSilo.c)
 */

void EtwpAdjustTraceBuffers()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 NextSilo; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Blink; // rsi
  __int64 CurrentSiloState; // rax
  PSLIST_ENTRY v7; // rax
  PSLIST_ENTRY v8; // rax

  if ( EtwpHostSiloState && !*(_DWORD *)(EtwpHostSiloState + 4068) )
  {
    EtwpAdjustSiloTraceBuffers(EtwpHostSiloState);
    v1 = 0LL;
    while ( 1 )
    {
      LOBYTE(v0) = 1;
      NextSilo = PspGetNextSilo(v1, v0);
      v3 = NextSilo;
      if ( !NextSilo )
        break;
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)NextSilo;
      CurrentSiloState = EtwpGetCurrentSiloState();
      if ( CurrentSiloState && !*(_DWORD *)(CurrentSiloState + 4068) )
        EtwpAdjustSiloTraceBuffers(CurrentSiloState);
      v1 = v3;
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    }
    if ( dword_14046B824 > 2 * (int)KeNumberProcessors_0 * dword_14046B820 )
    {
      do
      {
        v7 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
        if ( !v7 )
          break;
        ExFreePoolWithTag(v7, 0);
      }
      while ( _InterlockedDecrement(&dword_14046B824) > 2 * (int)KeNumberProcessors_0 * dword_14046B820 );
    }
    if ( dword_14046B844 > 2 * (int)KeNumberProcessors_0 * dword_14046B840 )
    {
      do
      {
        v8 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v8 )
          break;
        ExFreePoolWithTag(v8, 0);
      }
      while ( _InterlockedDecrement(&dword_14046B844) > 2 * (int)KeNumberProcessors_0 * dword_14046B840 );
    }
    _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  }
}
