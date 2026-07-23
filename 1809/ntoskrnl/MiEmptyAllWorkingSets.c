/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1402B319C
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1402B43A4 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 */

void __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  if ( byte_14043BF94 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 7024) + 28LL);
    MiQueueWorkingSetRequest(a1, 4);
  }
}
