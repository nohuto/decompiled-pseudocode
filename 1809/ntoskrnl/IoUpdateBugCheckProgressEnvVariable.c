/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1402803BC
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140280120 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140280164 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1402804AC (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1402810DC (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140281234 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x14028138C (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140297224 (KeFrozenProcessorCount.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = KeFrozenProcessorCount();
  if ( (unsigned int)(KeNumberProcessors_0 - result) <= 1 && !BugCheckProgressEFICalled )
  {
    BugCheckProgressEFICalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, void *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               &BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEFICalled = 0;
  }
  return result;
}
