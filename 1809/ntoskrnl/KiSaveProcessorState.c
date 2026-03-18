/*
 * XREFs of KiSaveProcessorState @ 0x14029CC00
 * Callers:
 *     KxNmiInterrupt @ 0x1401C89C0 (KxNmiInterrupt.c)
 *     KiFreezeTargetExecution @ 0x1402975DC (KiFreezeTargetExecution.c)
 * Callees:
 *     KeContextFromKframes @ 0x1400A2878 (KeContextFromKframes.c)
 *     KiSaveProcessorControlState @ 0x1401BBEF0 (KiSaveProcessorControlState.c)
 *     KiSaveNpxState @ 0x14029CBA4 (KiSaveNpxState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Context; // rbx
  int ContextFlagsInit; // edx
  int v7; // edx

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  *(_DWORD *)(Context + 48) = ContextFlagsInit;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0
    && ((ContextFlagsInit & 0x100040) == 1048640 || (ContextFlagsInit & 0x100008) == 1048584) )
  {
    KiSaveNpxState(Context, ContextFlagsInit);
  }
  KeContextFromKframes(a1, a2, Context);
  return KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v7);
}
