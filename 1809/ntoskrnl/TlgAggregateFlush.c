/*
 * XREFs of TlgAggregateFlush @ 0x14032BA04
 * Callers:
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013B200 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x1406AEF98 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateFlush(__int64 a1, __int64 a2)
{
  _BYTE *CallbackContext; // rcx
  struct _EX_TIMER **v3; // r8
  volatile signed __int16 *v4; // rdx

  if ( (ETWENABLECALLBACK *)stru_1403FFAA0.EnableCallback == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    CallbackContext = stru_1403FFAA0.CallbackContext;
    v3 = (struct _EX_TIMER **)stru_1403FFAA0.CallbackContext;
    if ( KeGetCurrentIrql() >= 2u
      || (CallbackContext = stru_1403FFAA0.CallbackContext, (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) )
    {
      v4 = (volatile signed __int16 *)*((_QWORD *)stru_1403FFAA0.CallbackContext + 33);
      CallbackContext[372] = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v3[45], v4);
    }
    else
    {
      LookUpTableFlushComplete(stru_1403FFAA0.CallbackContext, a2, stru_1403FFAA0.CallbackContext);
    }
  }
}
