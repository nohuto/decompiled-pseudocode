/*
 * XREFs of KiExecuteDpc @ 0x14018B540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiExecuteAllDpcs @ 0x1400A24E0 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x1401381AC (KiTryToEndDpcProcessing.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14018B7A4 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  _DWORD v4[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v4[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 11880) = 1;
  while ( 1 )
  {
    v4[0] = 0;
    KeWaitForGate(a1 + 22656, 5);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 11886) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v4, 1u);
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 11886), a1 + 11816) );
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
