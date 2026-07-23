/*
 * XREFs of ViZwCheckApcRequirement @ 0x14094B634
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x140948390 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409489A0 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140949A20 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x14094A790 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x14094B530 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
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
