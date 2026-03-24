/*
 * XREFs of swprintf_s @ 0x14019A360
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x14013B6B0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x14016BEE0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14016BFC0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14016D160 (RtlIpv4AddressToStringExW.c)
 *     RtlEthernetAddressToStringW @ 0x1402F33D0 (RtlEthernetAddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1406A2DBC (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406AE8A4 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     _PnpSetPropertyWorker @ 0x1406E61D0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7C80 (_CmCreateOrdinalInstanceKey.c)
 *     PnpInitializeNotifyEntry @ 0x1407035C4 (PnpInitializeNotifyEntry.c)
 *     SiGetBiosSystemPartition @ 0x1407040F0 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14071101C (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14071211C (BiGetDriveLayoutBlock.c)
 *     CmSetAcpiHwProfile @ 0x140730ED0 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E810 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FB378 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD58 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC000 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1408A6DD8 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1408CFDE4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D0398 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1408D0820 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D0C60 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1408D170C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1ECC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D280C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1408D35B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D3740 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x1408F2A18 (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x1409F3080 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x14019A390 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
