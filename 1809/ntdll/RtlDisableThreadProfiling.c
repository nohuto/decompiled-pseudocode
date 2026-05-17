/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800CE050
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(unsigned __int64 a1)
{
  int v2; // ebx

  v2 = NtSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
