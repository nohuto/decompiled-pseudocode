/*
 * XREFs of SepSecureBootSetRegistryKey @ 0x140A09A34
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A09958 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x14069DD10 (RtlStringFromGUID.c)
 */

__int64 __fastcall SepSecureBootSetRegistryKey(__int64 a1)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (dword_14046BD2C & 8) == 0 && !a1 )
  {
    v2 = 0;
    goto LABEL_4;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140376040;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v2 >= 0 )
    {
      if ( (dword_14046BD2C & 8) != 0 )
      {
        Data = dword_14046BD2C & 1;
        v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_140376050, 0, 4u, &Data, 4u);
        if ( v2 < 0 )
          goto LABEL_4;
        if ( Data )
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 7u);
      }
      if ( a1 )
      {
        v2 = RtlStringFromGUID((const GUID *const)(a1 + 4), &UnicodeString);
        if ( v2 >= 0 )
        {
          v2 = ZwSetValueKey(
                 Handle,
                 (PUNICODE_STRING)&stru_140376020,
                 0,
                 1u,
                 UnicodeString.Buffer,
                 UnicodeString.Length + 2);
          if ( v2 >= 0 )
            v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_140376030, 0, 4u, (PVOID)(a1 + 20), 4u);
        }
      }
    }
  }
LABEL_4:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
