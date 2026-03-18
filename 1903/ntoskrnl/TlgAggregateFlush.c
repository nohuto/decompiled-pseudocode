/*
 * XREFs of TlgAggregateFlush @ 0x14034D1EC
 * Callers:
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013CC10 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x14078A9DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateFlush(__int64 a1, __int64 a2)
{
  _BYTE *CallbackContext; // rcx
  struct _EX_TIMER **v3; // r8
  volatile signed __int16 *v4; // rdx

  if ( (ETWENABLECALLBACK *)stru_140425BC0.EnableCallback == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    CallbackContext = stru_140425BC0.CallbackContext;
    v3 = (struct _EX_TIMER **)stru_140425BC0.CallbackContext;
    if ( KeGetCurrentIrql() >= 2u
      || (CallbackContext = stru_140425BC0.CallbackContext, (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) )
    {
      v4 = (volatile signed __int16 *)*((_QWORD *)stru_140425BC0.CallbackContext + 33);
      CallbackContext[372] = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v3[45], v4);
    }
    else
    {
      LookUpTableFlushComplete(stru_140425BC0.CallbackContext, a2, stru_140425BC0.CallbackContext);
    }
  }
}
