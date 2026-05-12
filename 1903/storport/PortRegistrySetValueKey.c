/*
 * XREFs of PortRegistrySetValueKey @ 0x1C001BEBC
 * Callers:
 *     PortMapBuildAdapterEntry @ 0x1C001AD30 (PortMapBuildAdapterEntry.c)
 *     PortMapBuildLunEntry @ 0x1C001BD70 (PortMapBuildLunEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortRegistrySetValueKey(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, wchar_t *Buffer, ULONG a5)
{
  char v5; // r14
  struct _UNICODE_STRING *p_DestinationString; // rdi
  ULONG DataSize; // eax
  NTSTATUS v11; // ebx
  NTSTATUS result; // eax
  struct _STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v5 = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a2 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    p_DestinationString = 0LL;
  }
  DataSize = a5;
  if ( a3 != 119742466 )
  {
LABEL_4:
    v11 = ZwSetValueKey(KeyHandle, p_DestinationString, 0, a3, Buffer, DataSize);
    if ( v5 )
      RtlFreeUnicodeString(&UnicodeString);
    return v11;
  }
  if ( a5 > 0xFFFF )
    return -1073741675;
  a3 = 1;
  SourceString.Length = a5;
  SourceString.MaximumLength = a5;
  SourceString.Buffer = (char *)Buffer;
  result = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
  if ( result >= 0 )
  {
    v5 = 1;
    Buffer = UnicodeString.Buffer;
    DataSize = UnicodeString.Length + 2;
    goto LABEL_4;
  }
  return result;
}
