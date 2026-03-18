/*
 * XREFs of KiInSwapKernelStacks @ 0x1400E31F8
 * Callers:
 *     KeSwapProcessOrStack @ 0x140189BA0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KeGetNextKernelStackSegment @ 0x1400E364C (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x1400E3774 (MiInPageSingleKernelStack.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall KiInSwapKernelStacks(_QWORD *a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  char result; // al
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  do
  {
    v2 = (ULONG_PTR)(a1 - 27);
    a1 = (_QWORD *)*a1;
    memset(v6, 0, 0x20uLL);
    if ( (MiFlags & 0x40) != 0 )
    {
      LOBYTE(v4) = 1;
      KeGetNextKernelStackSegment(v2, v6, v4);
      do
        MiInPageSingleKernelStack(v2);
      while ( (unsigned __int8)KeGetNextKernelStackSegment(v2, v6, 0LL) );
    }
    _interlockedbittestandset((volatile signed __int32 *)(v2 + 120), 0x11u);
    result = KiFastReadyThread(v2, v3, v4);
  }
  while ( a1 );
  return result;
}
