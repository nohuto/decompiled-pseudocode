/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x1400E9540
 * Callers:
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x1402AE400 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
