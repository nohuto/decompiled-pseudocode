/*
 * XREFs of swprintf_s @ 0x1401A52F0
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x14015D2A0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x1401770E0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1401771C0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140177EB0 (RtlIpv4AddressToStringExW.c)
 *     RtlEthernetAddressToStringW @ 0x140311970 (RtlEthernetAddressToStringW.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1406C3558 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406D2754 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140705668 (_CmCreateOrdinalInstanceKey.c)
 *     _PnpSetPropertyWorker @ 0x140708F64 (_PnpSetPropertyWorker.c)
 *     PnpInitializeNotifyEntry @ 0x140722BE8 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x14072A02C (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14072C6D8 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14073D414 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x140760D08 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140787CB8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x140833D98 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1408347C8 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140834AB8 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x1408E3A64 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14090D00C (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090D5D4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14090DA84 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14090DED8 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14090FAE0 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1409108E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x140910A70 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x140930170 (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x140A381D0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1401A5320 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
