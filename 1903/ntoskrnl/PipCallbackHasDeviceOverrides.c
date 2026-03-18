/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x14085CDA8
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x140712AB0 (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401C0390 (ZwQueryKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  int v5; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _DWORD KeyInformation[12]; // [rsp+70h] [rbp+7h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v4 == -2147483643 )
      v4 = 0;
    if ( v4 >= 0 && (v5 = KeyInformation[5]) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v5;
    }
    else
    {
      v4 = -1073741823;
      ZwClose(KeyHandle);
    }
  }
  return v4 >= 0;
}
