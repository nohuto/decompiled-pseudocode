/*
 * XREFs of RtlpInitNlsFileName @ 0x140620FC4
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 */

NTSTATUS __fastcall RtlpInitNlsFileName(int a1, ULONG a2, wchar_t *a3, __int64 a4, UNICODE_STRING *DestinationString)
{
  int v8; // ebx
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING String; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v16; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v18; // [rsp+D4h] [rbp-2Ch]
  _BYTE v19[276]; // [rsp+DCh] [rbp-24h] BYREF

  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = a1 - 11;
  if ( v8 )
  {
    if ( v8 != 1 )
      return -1073741585;
    RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Normalization");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v14;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    if ( v10 < 0 )
      return v10;
    *(_DWORD *)(&String.MaximumLength + 1) = 0;
    *(_DWORD *)&String.Length = 4194368;
    String.Buffer = (wchar_t *)&v16;
    RtlIntegerToUnicodeString(a2, 0x10u, &String);
    v10 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x120u, &ResultLength);
    ZwClose(KeyHandle);
    if ( v10 < 0 )
      return v10;
    if ( v18 != 1 )
      return -1073741823;
    v10 = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\%s", v19);
    if ( v10 < 0 )
      return v10;
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\c_%.3d.nls", a2);
    v10 = result;
    if ( result < 0 )
      return result;
  }
  RtlInitUnicodeString(DestinationString, a3);
  return v10;
}
