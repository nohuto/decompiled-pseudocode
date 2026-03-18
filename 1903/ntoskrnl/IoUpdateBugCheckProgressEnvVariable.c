/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x14029571C
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1402953B0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x14029549C (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x1402954E8 (IoSetBugCheckProgressFlag.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140296854 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1402969A0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140296AEC (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1402AE1A0 (KeFrozenProcessorCount.c)
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
