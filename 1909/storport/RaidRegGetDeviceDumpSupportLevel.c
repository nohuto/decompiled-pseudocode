/*
 * XREFs of RaidRegGetDeviceDumpSupportLevel @ 0x1C0014FAC
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0014E84 (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     PortRegistryRead @ 0x1C006BF80 (PortRegistryRead.c)
 */

__int64 __fastcall RaidRegGetDeviceDumpSupportLevel(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v6; // [rsp+60h] [rbp+10h] BYREF
  int v7; // [rsp+64h] [rbp+14h]
  _DWORD *v8; // [rsp+68h] [rbp+18h] BYREF

  v8 = a2;
  v7 = HIDWORD(a1);
  v6 = 4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  *a2 = 2;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry");
  RtlInitUnicodeString(&v4, L"DeviceDumpLevel");
  return (unsigned int)PortRegistryRead(
                         (unsigned int)&DestinationString,
                         (unsigned int)&v4,
                         v2,
                         (unsigned int)&v8,
                         (__int64)&v6) != 0
       ? 0xC000000D
       : 0;
}
