/*
 * XREFs of MmMapIoSpaceEx @ 0x1400F6BD0
 * Callers:
 *     MmMapIoSpace @ 0x1400F6730 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x1401796D0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1401825E4 (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x14019B140 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x14019E708 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140285B04 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14028BE8C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1402923F0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x14034D5C4 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAA8 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406A4AF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140789190 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1408EF5AC (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408EF6F0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408EF7E8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1408EFCA0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140919C10 (WheapClearPoison.c)
 *     VerifierMmMapIoSpace @ 0x140984290 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409843A0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1400F6C14 (MiMapContiguousMemory.c)
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
