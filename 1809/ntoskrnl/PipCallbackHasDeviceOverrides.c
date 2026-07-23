/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x140823C9C
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _BYTE KeyInformation[20]; // [rsp+70h] [rbp+7h] BYREF
  int v10; // [rsp+84h] [rbp+1Bh]

  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 == -2147483643 )
      v3 = 0;
    if ( v3 >= 0 && (v4 = v10) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v4;
    }
    else
    {
      v3 = -1073741823;
      ZwClose(KeyHandle);
    }
  }
  return v3 >= 0;
}
