/*
 * XREFs of KxDispatchInterrupt @ 0x1401CA960
 * Callers:
 *     KiDispatchInterrupt @ 0x1401CA8D0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     SwapContext @ 0x1401CAB40 (SwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 KxDispatchInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v2 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v2;
  v3 = *(unsigned int *)(CurrentThread + 80);
  CurrentPrcb->StartCycles += v2;
  v4 = v2 + v3;
  v5 = v4;
  if ( HIDWORD(v4) )
    v5 = -1;
  *(_DWORD *)(CurrentThread + 80) = v5;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v2);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0);
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v8 = 0;
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      _mm_pause();
    }
    while ( (CurrentPrcb->PrcbLock & 1) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
  }
  NextThread = CurrentPrcb->NextThread;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = NextThread;
  NextThread->WaitBlockFill6[68] = 2;
  *(_BYTE *)(CurrentThread + 643) = 31;
  KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v7);
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  return SwapContext(1LL);
}
