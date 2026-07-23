/*
 * XREFs of RtlpGetNtProductTypeFromRegistry @ 0x140705064
 * Callers:
 *     RtlGetNtProductType @ 0x14012AD10 (RtlGetNtProductType.c)
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpGetNtProductTypeFromRegistry(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-79h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  int v7; // [rsp+58h] [rbp-59h] BYREF
  const wchar_t *v8; // [rsp+60h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING v11; // [rsp+88h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+98h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
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
        String1.Buffer = (wchar_t *)&v17;
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
