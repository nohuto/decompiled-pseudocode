/*
 * XREFs of PiDevCfgResetDeviceKeys @ 0x14082FFDC
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1406FB338 (PiDevCfgEnumDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeys(__int64 a1, __int64 a2, void *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v9 = L"Configuration\\Reset";
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  v8 = 2621478;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else if ( v5 >= 0 )
  {
    v6 = PiDevCfgEnumDeviceKeys(
           a1,
           a2,
           KeyHandle,
           -1,
           0,
           (__int64 (__fastcall *)(__int64, __int64, int *, HANDLE))PiDevCfgResetDeviceKeyCallback,
           0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
