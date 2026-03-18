/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x14017F8B8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14059E418 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = 16LL;
  if ( a2 != 1 )
    v5 = 8LL;
  return MiQueueWorkingSetRequest(a1, v5, 8LL, a4);
}
