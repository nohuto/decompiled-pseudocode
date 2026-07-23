/*
 * XREFs of sub_180087EB8 @ 0x180087EB8
 * Callers:
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180087EB8(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-79h] BYREF
  _UNICODE_STRING String1; // [rsp+40h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  int v7; // [rsp+58h] [rbp-59h] BYREF
  const wchar_t *v8; // [rsp+60h] [rbp-51h]
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-49h] BYREF
  _UNICODE_STRING String2; // [rsp+78h] [rbp-39h] BYREF
  _UNICODE_STRING v11; // [rsp+88h] [rbp-29h] BYREF
  _UNICODE_STRING v12; // [rsp+98h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp+27h] BYREF
  int v15; // [rsp+DCh] [rbp+2Bh]
  unsigned int v16; // [rsp+E0h] [rbp+2Fh]
  int v17; // [rsp+E4h] [rbp+33h] BYREF

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v7 = 8650882;
  ValueName.Buffer = L"ProductType";
  *(_DWORD *)&ValueName.Length = 1572886;
  v11.Buffer = L"LanmanNt";
  *(_DWORD *)&v11.Length = 1179664;
  v12.Buffer = L"ServerNt";
  *(_DWORD *)&v12.Length = 1179664;
  String2.Buffer = L"WinNt";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  *(_DWORD *)&String2.Length = 786442;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v15 == 1 && v16 >= 2 )
      {
        String1.MaximumLength = v16;
        String1.Buffer = (PWCH)&v17;
        String1.Length = v16 - 2;
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          *a1 = 1;
          goto LABEL_9;
        }
        if ( RtlEqualUnicodeString(&String1, &v11, 1u) )
        {
          *a1 = 2;
          goto LABEL_9;
        }
        if ( RtlEqualUnicodeString(&String1, &v12, 1u) )
        {
          *a1 = 3;
          goto LABEL_9;
        }
      }
      v2 = -1073739509;
    }
  }
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
