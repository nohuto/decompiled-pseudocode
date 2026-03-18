/*
 * XREFs of swprintf_s @ 0x14019A340
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x14013B690 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x14016BEC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14016BFA0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14016D140 (RtlIpv4AddressToStringExW.c)
 *     RtlEthernetAddressToStringW @ 0x1402F32D0 (RtlEthernetAddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1406A2DDC (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406AE8C4 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiUnloadHiveByName @ 0x1406E1860 (BiUnloadHiveByName.c)
 *     _PnpSetPropertyWorker @ 0x1406E61F0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7CA0 (_CmCreateOrdinalInstanceKey.c)
 *     PnpInitializeNotifyEntry @ 0x1407035E4 (PnpInitializeNotifyEntry.c)
 *     SiGetBiosSystemPartition @ 0x140704110 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14071103C (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140711D64 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14071213C (BiGetDriveLayoutBlock.c)
 *     CmSetAcpiHwProfile @ 0x140730EF0 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E830 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FB398 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD78 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC020 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1408A6DF8 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1408CFE04 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D03B8 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1408D0840 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D0C80 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1EEC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D282C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1408D35D0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D3760 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x1408F2A38 (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x1409F3078 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x14019A370 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
