/*
 * XREFs of MmMapIoSpaceEx @ 0x1400E5D60
 * Callers:
 *     MmMapIoSpace @ 0x1400E5D20 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x14016F7E0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140178680 (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x1401909D0 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1401939F4 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140271D9C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x140277E5C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14027DC00 (BgkNotifyDisplayOwnershipLost.c)
 *     InbvPortInitialize @ 0x14032C2C0 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x14056BF24 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406A7DBC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14075FBEC (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1408B27C4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408B2908 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408B2A00 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1408B2EB4 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1408DBF84 (WheapClearPoison.c)
 *     VerifierMmMapIoSpace @ 0x1409448C0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409449D0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400744A0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1400E5DA4 (MiMapContiguousMemory.c)
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
