/*
 * XREFs of swprintf_s @ 0x1401A4BD0
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x14015CC00 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x1401769B0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x140176A90 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1401777C0 (RtlIpv4AddressToStringExW.c)
 *     RtlEthernetAddressToStringW @ 0x140311F20 (RtlEthernetAddressToStringW.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B22DC (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1406C43F8 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406D32A4 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140703888 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpSetPropertyWorker @ 0x140707184 (_PnpSetPropertyWorker.c)
 *     PnpInitializeNotifyEntry @ 0x140720D48 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x140728CBC (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14072A838 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14073B514 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14073BE94 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140785958 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x140834738 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140835168 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x1408E415C (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14090D5AC (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090DB74 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14090E024 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14090E478 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14090EF38 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F718 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x140910080 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x140910E80 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140911010 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x14091AA7C (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x1409306FC (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x140A38450 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1401A4C00 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
