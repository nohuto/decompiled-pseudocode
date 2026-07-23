/*
 * XREFs of KiExecuteDpc @ 0x140181630
 * Callers:
 *     <none>
 * Callees:
 *     KiExecuteAllDpcs @ 0x1400C6C80 (KiExecuteAllDpcs.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x14012F544 (KiTryToEndDpcProcessing.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140181850 (KiSetSystemAffinityThreadToProcessor.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD v3[68]; // [rsp+20h] [rbp-138h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 11880) = 1;
  while ( 1 )
  {
    v3[0] = 0;
    KeWaitForGate(a1 + 22656, 5u);
    do
    {
      *(_WORD *)(a1 + 11886) = 1;
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v3, 1u);
      _enable();
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 11886), a1 + 11816) );
  }
}
