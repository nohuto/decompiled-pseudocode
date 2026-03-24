/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1402B2FAC
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1402AAFF0 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1402B41B4 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x14056EA20 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x140175CFC (MiQueueWorkingSetRequest.c)
 */

void __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  if ( byte_14043AED4 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 7024) + 28LL);
    MiQueueWorkingSetRequest(a1, 4);
  }
}
