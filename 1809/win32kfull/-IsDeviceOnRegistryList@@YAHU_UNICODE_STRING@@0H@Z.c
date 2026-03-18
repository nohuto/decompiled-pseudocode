/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C011F9C0
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C011F870 (IsMouseDeviceOnIgnoreList.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C015BFC4 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C01BB8E0 (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // edi
  ULONG v6; // r14d
  NTSTATUS v7; // r12d
  __int64 v9; // rsi
  struct _KEY_VALUE_FULL_INFORMATION *v10; // rsi
  unsigned int v11; // r13d
  void *KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+40h] BYREF
  ULONG Length; // [rsp+D8h] [rbp+58h] BYREF

  ResultLength = 0;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  v5 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a3 && a2->Length >= 0x2Au )
      {
        v6 = 0;
        do
        {
          if ( v5 )
            break;
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v7 != -1073741789 )
            break;
          v10 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInit(Length, 2019914581LL);
          if ( v10 )
          {
            v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, v10, Length, &Length);
            if ( v7 >= 0 )
            {
              v11 = *((unsigned __int8 *)&v10->TitleIndex + v10->DataOffset);
              if ( v11 - 1 <= 1
                && v10->Type == 4
                && v10->NameLength >= 0x2A
                && RtlCompareMemory(v10->Name, L"HID", 1uLL) )
              {
                v13 = *a2;
                v5 = CompareDeviceVIDPID(&v13, v10, v11) != 0;
              }
            }
            Win32FreePool(v10);
          }
          ++v6;
        }
        while ( v7 != -2147483622 );
      }
    }
    else
    {
      v9 = Win32AllocPool(ResultLength, 2019914581LL);
      if ( v9 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v9, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v9 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v9 + 12) - 1) <= 2u;
        }
        Win32FreePool(v9);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
