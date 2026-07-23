/*
 * XREFs of KeSwapProcessOrStack @ 0x14017FEE0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     KiOutSwapKernelStacks @ 0x14013D0B8 (KiOutSwapKernelStacks.c)
 *     KeGetNextKernelStackSegment @ 0x14013D478 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  signed __int64 *v0; // rdx
  __int64 v1; // rcx
  _QWORD *v2; // r8
  int v3; // r9d
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  ULONG_PTR v7; // rdi
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1, (__int64)v0, (__int64)v2);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v4 )
      KiOutSwapProcesses(v4, v0, (__int64)v2);
    v5 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapProcesses(v5, (__int64)v0, v2, v3);
    v6 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v6 )
    {
      v7 = (ULONG_PTR)(v6 - 27);
      v6 = (_QWORD *)*v6;
      if ( (MiFlags & 0x40) != 0 )
      {
        KeGetNextKernelStackSegment((_QWORD *)v7, v8, 1);
        do
          MiInPageSingleKernelStack(v7, v8);
        while ( KeGetNextKernelStackSegment((_QWORD *)v7, v8, 0) );
      }
      _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x11u);
      KiFastReadyThread(v7, (__int64)v0, (__int64)v2);
    }
  }
}
