/*
 * XREFs of RtlpGetNtProductTypeFromRegistry @ 0x1408D5290
 * Callers:
 *     RtlGetNtProductType @ 0x14012E090 (RtlGetNtProductType.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpGetNtProductTypeFromRegistry(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-79h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-41h] BYREF
  UNICODE_STRING v9; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING v10; // [rsp+90h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp+27h] BYREF
  int v14; // [rsp+DCh] [rbp+2Bh]
  unsigned int v15; // [rsp+E0h] [rbp+2Fh]
  int v16; // [rsp+E4h] [rbp+33h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v6[0] = 8650882LL;
  ValueName.Buffer = L"ProductType";
  v9.Buffer = L"LanmanNt";
  v10.Buffer = L"ServerNt";
  String2.Buffer = L"WinNt";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  *(_QWORD *)&ValueName.Length = 1572886LL;
  *(_QWORD *)&v9.Length = 1179664LL;
  *(_QWORD *)&v10.Length = 1179664LL;
  *(_QWORD *)&String2.Length = 786442LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v2 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v14 != 1 || v15 < 2 )
        goto LABEL_11;
      String1.MaximumLength = v15;
      String1.Buffer = (wchar_t *)&v16;
      String1.Length = v15 - 2;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *a1 = 1;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(&String1, &v9, 1u) )
      {
        *a1 = 2;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(&String1, &v10, 1u) )
        *a1 = 3;
      else
LABEL_11:
        v2 = -1073739509;
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
