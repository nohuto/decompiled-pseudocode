/*
 * XREFs of RIMCheckPressureDefaultSetting @ 0x1C00EA7F0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

int __fastcall RIMCheckPressureDefaultSetting(__int64 a1)
{
  int result; // eax
  __int64 v3; // rbx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 833) = 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\DefaultPressure");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"Disable");
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
    {
      if ( ResultLength )
      {
        v3 = Win32AllocPool(ResultLength, 0x63707352u);
        if ( v3 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 (PVOID)v3,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(v3 + 4) == 4
            && *(_BYTE *)(v3 + 12) == 1 )
          {
            *(_BYTE *)(a1 + 833) = 0;
          }
          Win32FreePool(v3);
        }
      }
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
