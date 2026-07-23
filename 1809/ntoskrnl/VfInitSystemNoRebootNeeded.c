/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1409275A0
 * Callers:
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14094BA20 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x14031AB4C (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14031CCD4 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1409247D8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140934774 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140939034 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14093EFEC (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // eax

  v3 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      MmLockPagableDataSection(VfInitVerifierComponents);
      MmLockPagableDataSection(&ViLoadedDriversCount);
      MmLockPagableDataSection((PVOID)&ViShortTime);
    }
    if ( v3 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v4 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v4 = 2491;
    MmVerifierData = v4;
    if ( v3 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v4 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    qword_14040E818 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_14040E508 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier);
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
    }
    ViFullyInitialized = 1;
  }
}
