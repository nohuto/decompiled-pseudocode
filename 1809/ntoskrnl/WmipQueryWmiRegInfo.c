/*
 * XREFs of WmipQueryWmiRegInfo @ 0x140763E20
 * Callers:
 *     IoWMISystemControl @ 0x1406CC11C (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
