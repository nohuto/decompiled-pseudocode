/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800CC800
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v2; // ebx

  v2 = ZwSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
