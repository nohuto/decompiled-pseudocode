/*
 * XREFs of MmMapIoSpaceEx @ 0x140118AB0
 * Callers:
 *     MmMapIoSpace @ 0x140118610 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x140178FE0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x14019AAE0 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140285DA4 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14028C12C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x140292690 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x14034DB64 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAC8 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406BFAF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140786E30 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1408EFC9C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408EFDE0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408EFED8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1408F0390 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 *     VerifierMmMapIoSpace @ 0x140984290 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409843A0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140050400 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140118AF4 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r10
  __int64 v5; // r11

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, ProtectionMask, 0LL);
}
