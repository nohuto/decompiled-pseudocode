/*
 * XREFs of GetNlsTablePath @ 0x1C02616F4
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00F6504 (ConvertToAndFromWideChar.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     StringCchCatW @ 0x1C0261874 (StringCchCatW.c)
 *     StringCchCopyW @ 0x1C02618DC (StringCchCopyW.c)
 */

__int64 __fastcall GetNlsTablePath(unsigned int a1, wchar_t *a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  size_t v6; // rdx
  ULONG Length; // [rsp+30h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = (wchar_t *)PALLOCMEM2(0x220uLL, 1936485959LL, 1);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, Length, &Length) >= 0
        && StringCchCopyW(a2, 0x104uLL, L"\\SystemRoot\\System32\\") >= 0 )
      {
        LOBYTE(v4) = StringCchCatW(a2, v6, v5 + 6) >= 0;
      }
      Win32FreePool(v5);
    }
    ZwClose(KeyHandle);
  }
  return v4;
}
