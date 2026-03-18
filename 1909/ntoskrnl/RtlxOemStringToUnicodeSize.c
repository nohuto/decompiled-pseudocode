/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x140713F90
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x140713E00 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1408CDC60 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14063FD10 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
