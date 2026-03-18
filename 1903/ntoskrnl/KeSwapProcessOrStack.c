/*
 * XREFs of KeSwapProcessOrStack @ 0x140189BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiOutSwapProcesses @ 0x140074500 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     KiInSwapKernelStacks @ 0x1400E31F8 (KiInSwapKernelStacks.c)
 *     KiOutSwapKernelStacks @ 0x1400E3280 (KiOutSwapKernelStacks.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  _QWORD *v0; // rdx
  int v1; // r8d
  int v2; // r9d
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v3 )
      KiOutSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v4 )
      KiInSwapProcesses(v4, v0, v1, v2);
    v5 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapKernelStacks(v5);
  }
}
