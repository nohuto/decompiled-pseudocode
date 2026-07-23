/*
 * XREFs of KiDispatchInterrupt @ 0x1401C41B0
 * Callers:
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2D20 (KiDeferGroupSchedulingPreemption.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 */

// bad sp value at call has been detected, the output may be wrong!
void __fastcall KiDispatchInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rcx
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF

  KiCheckForSListAddress(v7 - 128);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
  {
    KyRetireDpcList((_DWORD)CurrentPrcb, v8, v10, v11, a5, a6, a7, (__int64)&v14);
  }
  else
  {
    _enable();
    if ( CurrentPrcb->QuantumEnd )
    {
      CurrentPrcb->QuantumEnd = 0;
      KiQuantumEnd(v9, v8, v10, v11);
    }
    else if ( CurrentPrcb->NextThread )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || !KiDeferGroupSchedulingPreemption(CurrentThread, (__int64)CurrentPrcb) )
      {
        KxDispatchInterrupt();
      }
    }
  }
}
