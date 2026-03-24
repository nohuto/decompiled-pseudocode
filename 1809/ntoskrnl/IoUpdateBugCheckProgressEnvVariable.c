/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1402804BC
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140280220 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140280264 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1402805AC (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1402811DC (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140281334 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x14028148C (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140297324 (KeFrozenProcessorCount.c)
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
