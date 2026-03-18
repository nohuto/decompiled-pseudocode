/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140964AD4
 * Callers:
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14098A408 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x14033971C (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14033BD58 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x14096293C (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140972DB8 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14097D890 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
    qword_1404356D8 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_140435BF8 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
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
