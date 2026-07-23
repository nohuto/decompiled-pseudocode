/*
 * XREFs of WmipQueryWmiRegInfo @ 0x140764FF0
 * Callers:
 *     IoWMISystemControl @ 0x1406CD39C (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
