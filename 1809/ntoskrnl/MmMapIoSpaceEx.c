/*
 * XREFs of MmMapIoSpaceEx @ 0x1400E5DE0
 * Callers:
 *     MmMapIoSpace @ 0x1400E5DA0 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x14016F8E0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x140190B10 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140271F8C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14027DDF0 (BgkNotifyDisplayOwnershipLost.c)
 *     InbvPortInitialize @ 0x14032C4B0 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406A905C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140760DDC (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1408B3A24 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408B3B68 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408B3C60 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1408B4114 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1408DD244 (WheapClearPoison.c)
 *     VerifierMmMapIoSpace @ 0x1409458C0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409459D0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
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
