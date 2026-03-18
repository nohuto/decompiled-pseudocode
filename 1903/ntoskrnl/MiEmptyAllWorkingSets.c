/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1402C83FC
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1402C9654 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 7800);
  if ( byte_140466954 )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
