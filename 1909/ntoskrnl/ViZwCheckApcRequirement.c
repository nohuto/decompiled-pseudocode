/*
 * XREFs of ViZwCheckApcRequirement @ 0x14098A014
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x140986D70 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x140987380 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140988400 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x140989170 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x140989F10 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400A1670 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
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
