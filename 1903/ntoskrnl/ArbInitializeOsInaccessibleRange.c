/*
 * XREFs of ArbInitializeOsInaccessibleRange @ 0x140A1F984
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall ArbInitializeOsInaccessibleRange(char a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v7[2]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v8[2]; // [rsp+78h] [rbp-90h] BYREF
  const wchar_t *v9; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  ULONG Disposition[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD Data[10]; // [rsp+C8h] [rbp-40h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7[0] = 7733366LL;
  v8[1] = 0;
  memset(Data, 0, 0x48uLL);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.Attributes = 576;
    v9 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    v8[0] = 2228258;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, Disposition);
    if ( v3 >= 0 )
    {
      Data[8] = -1LL;
      ValueName.Buffer = L"PhysicalAddress";
      HIDWORD(Data[3]) = 1;
      HIDWORD(Data[4]) = 1;
      LODWORD(Data[0]) = 72;
      BYTE1(Data[5]) = 3;
      Data[7] = 1LL << a1;
      *(_DWORD *)&ValueName.Length = 1966110;
      v3 = ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, 0x48u);
      if ( v3 >= 0 )
        v3 = 0;
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
