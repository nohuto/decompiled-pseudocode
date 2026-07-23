/*
 * XREFs of EtwpReadPerSiloConfigParameters @ 0x140190750
 * Callers:
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406E9590 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall EtwpReadPerSiloConfigParameters(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v6; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v7; // [rsp+78h] [rbp-31h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 64;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0
    || (memset(QueryTable, 0, sizeof(QueryTable)),
        QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback,
        QueryTable[0].EntryContext = &v6,
        QueryTable[0].Name = L"EtwMaxLoggers",
        QueryTable[0].DefaultType = 4,
        v6 = 4,
        v7 = &v9,
        RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) < 0) )
  {
    result = v9;
  }
  else
  {
    result = 256;
    if ( v9 <= 0x100 )
    {
      result = v9;
      if ( v9 < 0x20 )
        result = 32;
    }
    v9 = result;
  }
  v3 = KeyHandle;
  *(_DWORD *)(a1 + 16) = result;
  if ( v3 )
    return ZwClose(v3);
  return result;
}
