/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1402C815C
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1402C93B4 (MmEmptyAllWorkingSets.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     MmPerformMemoryListCommand @ 0x14059E418 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 7800);
  if ( byte_140466654 )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
