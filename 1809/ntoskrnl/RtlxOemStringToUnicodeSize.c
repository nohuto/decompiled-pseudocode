/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1406F71D0
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x1406F7050 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14088FFD0 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405AAF50 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
