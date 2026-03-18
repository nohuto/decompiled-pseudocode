/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x14029547C
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140295110 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1402951FC (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x140295248 (IoSetBugCheckProgressFlag.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1402965B4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140296700 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x14029684C (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1402ADF00 (KeFrozenProcessorCount.c)
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
