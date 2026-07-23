/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x140190480
 * Callers:
 *     EtwpContainerResumeWnfCallback @ 0x140330360 (EtwpContainerResumeWnfCallback.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x14019072C (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlUnicodeToUTF8N @ 0x1406E05C0 (RtlUnicodeToUTF8N.c)
 *     RtlQueryRegistryValuesEx @ 0x1406E9590 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(
        GUID *a1,
        PVOID *a2,
        _WORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        GUID *a6)
{
  NTSTATUS RegistryValues; // ebx
  ULONG v11; // ebx
  CHAR *PoolWithTag; // rax
  NTSTATUS v13; // eax
  _WORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v19; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *v27; // [rsp+C8h] [rbp-38h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  UTF8StringActualByteCount = 0;
  v15[0] = 0;
  *a4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v19.Length = 0LL;
  v19.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    v23 = a4;
    QueryTable[1].DefaultType = 1;
    QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[0].EntryContext = &v22;
    QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[0].Name = L"ContainerType";
    v24 = 1;
    QueryTable[0].DefaultType = 4;
    v22 = 4;
    QueryTable[1].EntryContext = &v24;
    QueryTable[1].Name = L"ContainerId";
    QueryTable[1].DefaultData = v15;
    p_UnicodeString = &UnicodeString;
    QueryTable[2].EntryContext = &v26;
    QueryTable[2].Name = L"ContainerCorrelationId";
    QueryTable[2].DefaultData = v15;
    QueryTable[2].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[2].DefaultType = 1;
    v26 = 1;
    v27 = &v19;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a5 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(&UnicodeString, a1) )
        *a1 = NullGuid;
      if ( !RtlUnicodeToUTF8N(0LL, 0, &UTF8StringActualByteCount, UnicodeString.Buffer, UnicodeString.Length) )
      {
        v11 = UTF8StringActualByteCount;
        if ( UTF8StringActualByteCount < 0xFFFF )
        {
          PoolWithTag = (CHAR *)ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  UTF8StringActualByteCount,
                                  0x61777445u);
          *a2 = PoolWithTag;
          if ( PoolWithTag )
          {
            v13 = RtlUnicodeToUTF8N(
                    PoolWithTag,
                    v11,
                    &UTF8StringActualByteCount,
                    UnicodeString.Buffer,
                    UnicodeString.Length);
            if ( !v13 || v13 == 263 )
            {
              *a3 = UTF8StringActualByteCount;
            }
            else
            {
              ExFreePoolWithTag(*a2, 0x61777445u);
              *a2 = 0LL;
            }
          }
        }
      }
      RegistryValues = StringToGuidNoBrackets(&v19, a6);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a6 = NullGuid;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v19);
  return (unsigned int)RegistryValues;
}
