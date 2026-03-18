/*
 * XREFs of KdpReport @ 0x1402A2900
 * Callers:
 *     KdpTrap @ 0x140957FB8 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1401C4920 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1401C49F0 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     KdpReportExceptionStateChange @ 0x1409552CC (KdpReportExceptionStateChange.c)
 *     KdpCopyContext @ 0x1409570D0 (KdpCopyContext.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // edx
  char v9; // di
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rbp
  char v12; // r14
  int v13; // edx
  _CONTEXT *Context; // rdx
  __int64 v15; // r8
  unsigned int ContextFlags; // ebx
  char v17; // di
  __int64 v18; // rcx
  char result; // al

  v6 = *a3;
  if ( *a3 == -1073740768
    || (unsigned int)(v6 + 2147483645) <= 1
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( a6 || (unsigned int)v6 > 0x4000001D && v6 != -1073741769 && v6 < 1073741856 )
      goto LABEL_6;
  }
  else
  {
    v9 = a6;
    if ( a6 )
    {
LABEL_6:
      v10 = KdEnterDebugger(a1);
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = v10;
      KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a4 + 48), a4);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v13);
      Context = CurrentPrcb->Context;
      LOBYTE(v15) = v9;
      ContextFlags = Context->ContextFlags;
      v17 = KdpReportExceptionStateChange(a3, Context, v15);
      KdpCopyContext(a4, ContextFlags, CurrentPrcb->Context);
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
      LOBYTE(v18) = v12;
      KdExitDebugger(v18);
      result = v17;
      KdpControlCPressed = 0;
      return result;
    }
  }
  return 0;
}
