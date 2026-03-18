/*
 * XREFs of ViZwCheckApcRequirement @ 0x14094A634
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x140947390 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409479A0 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140948A20 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x140949790 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x14094A530 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400CAA70 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x100) != 0 && (CurrentIrql || KeAreAllApcsDisabled()) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xE6uLL,
      BugCheckParameter2,
      CurrentIrql,
      KeGetCurrentThread()->SpecialApcDisable);
}
