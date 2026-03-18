/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F1E8
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017F0C8 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033EFD8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     AllocateMemory @ 0x14033EF8C (AllocateMemory.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ULONG a1, HANDLE *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  WCHAR *Memory; // rdi
  HANDLE v6; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE v15; // [rsp+E8h] [rbp+7Fh] BYREF

  ResultLength = a1;
  if ( dword_14050EA74 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, &word_14050BF80);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(a2, 8u, &ObjectAttributes);
  }
  KeyHandle = 0LL;
  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v9;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ResultLength = 0;
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v4 != -1073741789 && v4 != -2147483643 )
    {
      *(_QWORD *)&DestinationString.Length = 11141120LL;
      DestinationString.Buffer = &word_14050BF80;
      if ( v9.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&DestinationString, &v9);
        dword_14050EA74 = 1;
      }
      v3 = 0;
      *a2 = KeyHandle;
      KeyHandle = 0LL;
      goto LABEL_21;
    }
    Memory = (WCHAR *)AllocateMemory(ResultLength);
    if ( Memory )
    {
      v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Memory, ResultLength, &ResultLength);
      if ( v3 >= 0 )
      {
        if ( *((_DWORD *)Memory + 1) != 1 )
        {
          v6 = KeyHandle;
          KeyHandle = 0LL;
LABEL_15:
          *a2 = v6;
          goto LABEL_16;
        }
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = 0LL;
        RtlInitUnicodeString(&SourceString, Memory + 6);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &SourceString;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v3 = ZwOpenKey(&v15, 8u, &ObjectAttributes);
        if ( v3 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 11141120LL;
          DestinationString.Buffer = &word_14050BF80;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            dword_14050EA74 = 1;
          }
          v6 = v15;
          goto LABEL_15;
        }
      }
LABEL_16:
      ExFreeHeapPool((ULONG_PTR)Memory);
      goto LABEL_21;
    }
    v3 = -1073741801;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
