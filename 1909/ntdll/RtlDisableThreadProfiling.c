/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800CC8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v2; // ebx

  v2 = NtSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
