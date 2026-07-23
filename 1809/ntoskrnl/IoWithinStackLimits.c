/*
 * XREFs of IoWithinStackLimits @ 0x140103EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r10
  ULONG_PTR StackLimit; // rdx
  _QWORD *InitialStack; // r9
  void *StackBase; // r8
  char *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = RegionStart + RegionSize;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) == 0 || CurrentThread == KeGetCurrentPrcb()->IdleThread )
  {
    StackLimit = (ULONG_PTR)CurrentThread->StackLimit;
    InitialStack = CurrentThread->InitialStack;
    StackBase = CurrentThread->StackBase;
    while ( RegionStart < StackLimit || v3 > (unsigned __int64)StackBase )
    {
      if ( !InitialStack[2] )
        return 0;
      StackLimit = InitialStack[3];
      StackBase = (void *)InitialStack[2];
      InitialStack = (_QWORD *)InitialStack[5];
    }
  }
  else
  {
    v8 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    if ( v3 > (unsigned __int64)v8 || RegionStart < (unsigned __int64)&v8[-(unsigned int)KeKernelStackSize] )
      return 0;
  }
  return 1;
}
