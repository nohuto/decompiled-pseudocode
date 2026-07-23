/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x140175DD4
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  __int64 v3; // rdx

  v3 = 16LL;
  if ( a2 != 1 )
    v3 = 8LL;
  return MiQueueWorkingSetRequest(a1, v3, 8LL);
}
