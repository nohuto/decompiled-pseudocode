/*
 * XREFs of swprintf_s @ 0x14019A4A0
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x14013B7B0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x14016BFE0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14016C0C0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14016D260 (RtlIpv4AddressToStringExW.c)
 *     RtlEthernetAddressToStringW @ 0x1402F35C0 (RtlEthernetAddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1406A405C (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     _PnpSetPropertyWorker @ 0x1406E7470 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E8F20 (_CmCreateOrdinalInstanceKey.c)
 *     PnpInitializeNotifyEntry @ 0x140704864 (PnpInitializeNotifyEntry.c)
 *     SiGetBiosSystemPartition @ 0x140705390 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x1407122BC (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x1407133BC (BiGetDriveLayoutBlock.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075FA00 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FC578 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FCF58 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407FD200 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1408A8038 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1408D10A4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D1658 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1408D1AE0 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D1F20 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D3ACC (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1408D4870 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D4A00 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x1408F3CD8 (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x1409F4080 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x14019A4D0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
