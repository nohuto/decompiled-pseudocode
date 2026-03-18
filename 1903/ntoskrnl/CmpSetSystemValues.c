/*
 * XREFs of CmpSetSystemValues @ 0x140A0CA2C
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     CmpSetSystemRegistryString @ 0x14018CFF8 (CmpSetSystemRegistryString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 a1)
{
  NTSTATUS v2; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpSystemStartOptionsString,
           0,
           1u,
           CmpLoadOptions.Buffer,
           CmpLoadOptions.Length);
    if ( v2 >= 0 )
    {
      v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpSystemBootDeviceString, *(PCSZ *)(a1 + 184));
      if ( v2 >= 0 )
      {
        v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpFirmwareBootDeviceString, *(PCSZ *)(a1 + 192));
        if ( v2 >= 0 )
        {
          v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpWindowsSysPartString, *(PCSZ *)(a1 + 344));
          if ( v2 >= 0 )
          {
            v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpOsBootstatPathString, *(PCSZ *)(a1 + 328));
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
                  {
                    if ( ZwQueryValueKey(
                           KeyHandle,
                           (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                           KeyValueFullInformation,
                           KeyValueInformation,
                           0x100u,
                           ResultLength) >= 0
                      && KeyValueInformation[1] == 4 )
                    {
                      v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
                    }
                    else
                    {
                      v4 = 1;
                    }
                    v7 = v4;
                    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v7, 4u);
                  }
                  if ( v2 >= 0 )
                    v2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
