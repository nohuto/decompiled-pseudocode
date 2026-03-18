/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140740AC4
 * Callers:
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140740AF8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
