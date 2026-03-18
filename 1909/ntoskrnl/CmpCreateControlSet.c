/*
 * XREFs of CmpCreateControlSet @ 0x140A0B32C
 * Callers:
 *     CmpCreateExtendedControlSets @ 0x140A0B778 (CmpCreateExtendedControlSets.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14014512C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall CmpCreateControlSet(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 Data; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Disposition[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v11; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v16[256]; // [rsp+138h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)v16;
  v11 = 0LL;
  Handle = 0LL;
  LODWORD(Data) = 0;
  v4 = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws", a1);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpSelectString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&v11, 0x20019u, &ObjectAttributes);
      v4 = v5;
      if ( v5 == -1073741772 )
      {
        if ( !a2 )
          goto LABEL_10;
        v4 = ZwCreateKey(&v11, 0x20019u, &ObjectAttributes, 0, 0LL, 0, Disposition);
        if ( v4 < 0 )
          goto LABEL_10;
        LODWORD(Data) = 1;
        v4 = ZwSetValueKey(v11, (PUNICODE_STRING)&CmpCurrentString, 0, 4u, &Data, 4u);
        if ( v4 < 0 )
          goto LABEL_10;
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v16;
        RtlUnicodeStringPrintf(&DestinationString, L"ControlSet%03d", (unsigned int)Data);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, Disposition);
        if ( v4 < 0 )
          goto LABEL_10;
        ZwClose(Handle);
        Handle = 0LL;
      }
      else if ( v5 < 0 )
      {
        goto LABEL_10;
      }
      if ( !(_DWORD)Data )
      {
        v4 = ZwQueryValueKey(
               v11,
               (PUNICODE_STRING)&CmpCurrentString,
               KeyValueFullInformation,
               KeyValueInformation,
               0x80u,
               &ResultLength);
        if ( v4 < 0 )
          goto LABEL_10;
        LODWORD(Data) = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      }
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, Disposition);
      if ( v4 >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v16;
        RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws\\ControlSet%03d", a1, (unsigned int)Data);
        v4 = ZwSetValueKey(Handle, &CmSymbolicLinkValueName, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
