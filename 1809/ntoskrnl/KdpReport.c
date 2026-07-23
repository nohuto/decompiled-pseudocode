/*
 * XREFs of KdpReport @ 0x14028CCF0
 * Callers:
 *     KdpTrap @ 0x14091A518 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1401BBFA0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1401BC070 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     KdpReportExceptionStateChange @ 0x140917954 (KdpReportExceptionStateChange.c)
 *     KdpCopyContext @ 0x140919934 (KdpCopyContext.c)
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
