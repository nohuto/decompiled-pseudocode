/*
 * XREFs of ?GetLanguageID@@YAGXZ @ 0x1C0061870
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00614F8 (InitializeGreCSRSS.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 */

__int64 GetLanguageID(void)
{
  unsigned __int16 v0; // di
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  ULONG Value; // [rsp+98h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v0 = 1033;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v1 = (WCHAR *)PALLOCMEM2(0x220uLL, 1684630599LL, 1);
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v1, Length, &Length) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, v1 + 6);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
        v0 = Value;
      }
      Win32FreePool((__int64)v1);
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
